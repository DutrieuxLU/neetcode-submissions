class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        for i in reversed(range(len(tokens))):
            st.append(tokens[i])
        while len(st) > 1:
            n1 = st.pop()
            n2 = st.pop()
            op = st.pop()
            while op not in ["+", "-", "*", "/"]:
                t = op
                op = st.pop()
                n1 = n2
                n2 = t
                st.append(t)
            match op:
                case "+":
                    n1 = int(n1) + int(n2)
                case "-":
                    n1 = int(n1) - int(n2)
                case "*":
                    n1 = int(n1) * int(n2)
                case "/":
                    n1 = int(n1) * int(n2)
            st.append(n1)
        return st.pop()
        