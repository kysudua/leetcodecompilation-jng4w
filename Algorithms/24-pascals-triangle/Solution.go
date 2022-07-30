func generate(numRows int) [][]int {
    res :=[][]int{{1}};
    for i:=1; i<numRows; i++ {
        var row []int;
        row = append(row, 1);
        for j :=1; j<len(res[i-1]); j++ {
            tmp:=res[i-1][j]+res[i-1][j-1];
            row=append(row, tmp);
        }
        row = append(row, 1);
        res=append(res, row);
    }
    return res;
}