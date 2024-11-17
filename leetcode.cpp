vector<int> vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back(nums[i]*nums[i]);
        }
        int n=vec.size();
        for(int i=0;i<n;i++){
            for( int j=0;j<n-i-1;j++){
                if(vec[j]>vec[j+1]){
                    int temp= vec[j];
                    vec[j]=vec[j+1];
                    vec[j+1]=temp;
                }
            }
        }
        return vec;
         
    }