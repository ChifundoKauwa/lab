 #include<iostream>
    using namespace std;
    int main()
    {
        double** pPointer =nullptr;
        int row;
        int column,size;
        int count =1;
        cout<<"enter type of dimension of an array :";
        cin>>size;
        
		if(size>=3){
            cout<<"the dimensions  must not exceed 3,run the code again"<<endl;
		}
		else{
		      cout<<"enter the number of rows of an array :";
        cin>>row;
        cout<<"enter number of columns of an array :";
        cin>>column;
		  
        pPointer=new double*[row];
        for(int i=0;i<row;i++){
                pPointer[i]=new double[column];
        
            }
        }
        
        
            for(int i=0;i<row;i++){
                for(int j=0;j<column;j++){
                    pPointer[i][j]=count;
                    count++;
                  
                }
            }
            
           
             for(int i=0;i<row;i++){
                for(int j=0;j<column;j++){
                    cout<<pPointer[i][j]<<" ";
                
                }
                cout<<endl;
            }
        
        return 0;

    }