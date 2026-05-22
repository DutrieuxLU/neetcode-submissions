class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        tokens.reverse()
        while len(tokens) >= 1:
            print(tokens)
            curr = tokens.pop()
            if curr not in ["+", "-", "*", "/"]:
                st.append(curr)
            else:
                n2 = int(st.pop())
                n1 = int(st.pop())
                match curr:
                    case "+":
                        n1 += n2
                    case "-":
                        n1 -= n2
                    case "*":
                        n1 *= n2
                    case "/":
                        n1 /= n2
                st.append(n1)
        return st.pop()

                        

        