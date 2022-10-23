ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    int x;
    cin>>x;
    int a,o; 
    cin>> a>>o;

    int total_cost = a+o;

    if(x>= total_cost) {
        cout <<"Yes"<< endl;
    }
    else {
        cout << "No" << endl;
    }
