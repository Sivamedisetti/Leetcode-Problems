class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        l=[]
        intervals.sort()
        l.append(intervals[0])
        n = len(intervals)
        for i in range(1,n,1):
            if l[-1][1] >= intervals[i][0]:
                l[-1][1] = max( l[-1][1], intervals[i][1])
            else:
                l.append(intervals[i])
                
        return l
        

        