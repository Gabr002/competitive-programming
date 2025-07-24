/* 
    int targ, pos;
    int v[10] = {1, 4, 4, 7, 7, 8, 9, 11, 19};

    scanf("%d", &targ);
    sort(v, v+n);
    int l = 0, r = 9;
    
    while(l < r){
        int m = (l+r)/2;
        if(v[m] == targ){
            l = m;
            break;
        }
        else if(v[m] < targ) l = m + 1;
        else r = m -1;
    }
    if(v[l] == targ) pos = l;
    else pos = -1; 
*/

//////////////////////////////////

// lower_bound

/* 
    while(l < r){
        int m = (l+r)/2;
        if(v[m] < targ) l = m + 1;
        else r = m;
    }
    pos = l; 
*/

//////////////////////////////////


// upper_bound

/*  
    while(l < r){
        int m = (l+r)/2;
        if(v[m] <= targ) l = m + 1;
        else r = m;
    }
    pos = l; 
*/
