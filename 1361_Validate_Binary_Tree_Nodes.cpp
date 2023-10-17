class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {

        //To become valid binary tree :
        //  (1)Must not have cycles
        //  (2)Must not have same ancestors
        //  (3)Number of nodes must be equal to n(given)

        int count = n-1;// manages the (3) condition

        vector<int> visited(n,0);//manages (1) condition
        vector<int> parent(n,-1);

        for(int i=0;i<n;i++){

            if(leftChild[i]==-1)continue;
            if(visited[leftChild[i]]==1)return false;//manages (1) condition


            //for managing the (3) condition i.e checking ancestors/parents
            int temp=parent[i];
            while(temp!=-1){
                if(temp==leftChild[i]){
                    return false;
                }

                temp=parent[temp];
            }

            visited[leftChild[i]]=1;
            parent[leftChild[i]]=i;

            count--;
        }


        //Doing the same for rightChild
        for(int i=0;i<n;i++){

            if(rightChild[i]==-1)continue;
            if(visited[rightChild[i]]==1)return false;

            int temp=parent[i];
            while(temp!=-1){
                if(temp==rightChild[i]){
                    return false;
                }

                temp=parent[temp];
            }

            visited[rightChild[i]]=1;
            parent[rightChild[i]]=i;

            count--;
        }

        if(count!=0)return false;
        return true;
        
    }
};