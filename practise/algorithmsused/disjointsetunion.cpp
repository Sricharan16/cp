int find_set(int v)
{
	if(v==parent[v])
		return v;
	return find_set(parent[v]);
}
void make_set(int v)
{
	parent[v]=v;
}
void union_sets(int a,int b)
{
	a=find_set(a);
	b=find_set(b);
	if(a!=b)
	{
		parent[b]=a;
	}
}
//using the above mentioned approach things will take order n time 
//so we need to optimise this process
//path compression optimisation
int find_set(v)
{
	if(parent[v]==v)
		return v;
	return parent[v]=find_set(parent[v]);
}
//now this will take logn time for each of its detection


//now union by size or rank approach 
//here we attach a tree with a lower size to the one with the higher rank 
void make_set(int v) {
    parent[v] = v;
    size[v] = 1;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}
//we should still use path compression here fot faster results
//another approach is to use by rank 
void make_set(int v) {
    parent[v] = v;
    rank[v] = 0;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}
//DSU with union by size / rank, but without path compression works in O(logn) time per query.
