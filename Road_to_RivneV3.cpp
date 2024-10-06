#include <bits/stdc++.h>

using namespace std;

void sort(int &box_L, int &box_H, int &box_W)
{
    if(box_L<box_H) swap(box_L, box_H);
    if(box_L<box_W) swap(box_L, box_W);
    if(box_H<box_W) swap(box_H, box_W);
}
int main()
{
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int bridge_H,bridge_W, box_L, box_H, box_W;
        cin >> box_L >> box_H >> box_W >> bridge_H >> bridge_W;
        if(bridge_H<bridge_W) swap(bridge_H, bridge_W);
        sort(box_L, box_H, box_W);
        if(box_W<=bridge_W && box_H<=bridge_H)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }



    return 0;
}














