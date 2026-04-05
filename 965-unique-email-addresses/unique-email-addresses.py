class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        st=set()
        for i in emails:
            local,domain=i.split('@')
            if '+' in local:
                local=local[: local.index('+')]
            local=local.replace('.','')
            st.add(local+'@'+domain)
        return len(st)

        