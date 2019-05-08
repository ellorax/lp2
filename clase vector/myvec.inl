myvector::myvector(){
	maxsize=20;
	array=new int[maxsize];
	size=0// es 0 porque no hay elementos aun en el array
	
}
myvector::myvector(int i){
	maxsize=i;
	array=new int[maxsize];
	size=0}

myvector::myvector(const myvector&v){
	
	maxsize=v.maxsize;
	size=v.size;
	array=new array[maxsize];
	for(int i=0;i<v.size;i++)
		array[i]=v.array[i];
	
}

myvector::~myvector(){
	delete[] array;
	
}

void myvector::push_back(int i){
	if(size+1>maxsize)
		alloc_new();
	array[size];
	size++
} 

int operator[](int i){
	return array[i]
	
}

int myvector::look(int i){
	if(i<size)
		return array[i];
	
	throw 10}
	
void myvector::alloc_new(){
	
	maxsize=size*2;
	int *cop=new int[maxsize];
	for(int i=0;i<size;i++){
		cop[i]=array[i];
	
	delete[] array;
	array=cop;
	
	}
}
	
myvector& myvector::operator +=(int i){
	this->push_back(i);
	return *this
}

myvector& operator=(const myvector&){
	if(this!=&v){
	
	maxsize=v.maxsize;
	size=v.size;
	array=new array[maxsize];
	for(int i=0;i<v.size;i++)
		array[i]=v.array[i];
} return *this
