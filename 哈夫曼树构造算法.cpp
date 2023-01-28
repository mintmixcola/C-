//哈夫曼树构造算法
viod Fuffman Tree(element HuffNode[],int w[],int n)
{
	int i, k;
	for(i=0; i<2*n-1;i++)
	{
		HuffNode[i].parent = -1;
		HuffNode[i].ichild = -1;
		HuffNode[i].rchild = -1;
	}
	for(i=0; i<n;i++)
	HuffNode[i].weight = w[i];
	for(k=n;k<2*n-1:k++)
	{
		select(hufftree,i1.i2);//自行编写函数
		 HuffNode[i].weight=HuffNode[i1].weight + HuffNode[i2].weight;
		 HuffNode[i1].parent = k;
		  HuffNode[i2].parent = k;
		   HuffNode[K].rchild =i2;
	}
 } 
