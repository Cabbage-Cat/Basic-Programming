#include <cstring>
#include <iostream>
#include <stack>
#define MAX_N 1000

typedef std::pair<int,int> P;
int mov_x[4] = {0,0,-1,1},mov_y[4] = {1,-1,0,0}; //Four direction.
int vis[MAX_N][MAX_N];
std::stack<P> path;//Save the path.

bool isEdge(P p);

void mazeTraverse(char (*maze)[13],P p); //DFS + BackTrack.

int main()
{
    //Test.
    char m[12][13] = {
        "############",
        "#...#......#",
        "..#.#.####.#",
        "###.#....#.#",
        "#....###.#..",
        "####.#.#.#.#",
        "#..#.#.#.#.#",
        "##.#.#.#.#.#",
        "#........#.#",
        "######.###.#",
        "#......#...#",
        "############",
    };

    mazeTraverse(m,P(10,1));
    return 0;
}

bool isEdge(P p)
{
    return (p.first == 0 || p.first==11 || p.second == 0|| p.second ==11);
}
void mazeTraverse(char (*maze)[13],P p)
{
    if (maze[p.first][p.second] != '.')
    {
        std::cout << "Input Error." << std::endl;
        return;
    }

    vis[p.first][p.second] = 1;
    path.push(p);
    if (isEdge(p) && maze[p.first][p.second] == '.')
    {
        vis[p.first][p.second] = 0;
        std::stack<P> path_tmp;
        while (!path.empty())
        {
            path_tmp.push(path.top());
            path.pop();
        }

        while(!path_tmp.empty()) //turn back the stack to output.
        {
            P tmp = path_tmp.top();

            maze[tmp.first][tmp.second] = 'X';
            for (int i=0;i<12;i++)
            {
                for (int j=0;j<12;j++)
                    printf("%c",maze[i][j]);
                printf("\n");
            }
            printf("\n");
            maze[tmp.first][tmp.second] = '.';
            
            //std::cout << tmp.first << ',' << tmp.second << "  ";
            path_tmp.pop();
        }
        return;
    }
    else
    {
        for (int i=0;i<4;i++)
        {
            int dx = p.first + mov_x[i] , dy = p.second + mov_y[i];
            if (dx >=0 && dx<12 && dy >=0 && dy < 12 && maze[dx][dy] == '.' && !vis[dx][dy]) //the point can DFS and not visted.
            {
                mazeTraverse(maze,P(dx,dy));
                vis[p.first][p.second] = 0;
                path.pop();
                return;
            }
        }
    }
    std::cout << "Have no path."<<std::endl;
}

