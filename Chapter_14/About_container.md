####About C++ STL
`<vector>`

    Declare : vector <type> name
    Input : `.push_back(data)`
    Strength : Better memory than *type + new
    Worth : Edit

`<list>`

    Declare : list <type> name
    Input : .push_back()
    Edit : .insert(iterator, data), .erase(iterator)
    Strength : Better edit than vector

`<map>`

    Declare : map <type, type> name
    Input : .insert(pair <type,type>(key,value)), 
            name[key] = value
    iterator : iterator -> first : key
               iterator -> second : value
    -> map can have only one unique key
    
`<stack>`

    Declare : stack <type> name
    Input : .push(data)
    Delete : .pop(data)
    Select data : .top() (but only one that is inputed at last)
    Check : .empty()

`<queue>`

    Declare : stack <type> name
    Input : .push(data)
    Delete : .pop(data)
    Select data : .top() (but only one that is inputed at first)
    Check : .empty()

`priority_queue`

    Declare : priority_queue <type> name
    priority_queue <type> name : descend
    priority_queue <type, vector<type>, greater<type> > name : ascend
    Set descending or ascending order regarless of order of entering