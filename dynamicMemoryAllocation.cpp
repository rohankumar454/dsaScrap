//dynamic memory allocation
    int ar[5] = {1,2,3,4,5};
    //this typr of arary uses stack memory to create array
    //where space to be used is defind 

    //but.....to create the specific size of arayy
    //during run time we have to use heap memory ::
    //HERE IS HOW DYNAMIC MEMERY ALLOCATION WORKS::

    int n;
    cout << "Enter size of array :: ";
    cin >> n;
    int *arr = new int[n];
    //heap memory alloctin sirf address of memory 
    //show karti hai isliye ise pointer me store
    //karna bhaut jaroori hai !!!!
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    cout << sum << endl;




//ek orr important bar::
//static memory alloccation me space km leta hai
//jaise-
int arr[20] //yaha pr total space 4*20 = 80 bytes
int *ptr = new int[k]//yaha pr - 8byte pointer ki + k*4 byte array ki
