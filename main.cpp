template<long b, char>class C:C<b+0x31,0>{};
template<>class C<0x30,0x31>{};class C<__DATE__[4],__DATE__[5]> c;
int main() {}
