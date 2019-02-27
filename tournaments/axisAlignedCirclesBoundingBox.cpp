int axisAlignedCirclesBoundingBox(std::vector<int> x, std::vector<int> y, std::vector<int> r) {
    int minx = 1000, maxx = -1000, miny = 1000, maxy = -1000;
    for(int i=0;i<x.size();i++)
    {
        minx = min(minx, x[i] - r[i]);
        maxx = max(maxx, x[i] + r[i]);
    }
    for(int i=0;i<y.size();i++)
    {
        miny = min(miny, y[i] - r[i]);
        maxy = max(maxy, y[i] + r[i]);
    }
    return abs(maxx - minx) * abs(maxy - miny);
}
