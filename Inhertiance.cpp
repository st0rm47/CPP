/*--->Types of Inheritance*/

/*--->Single Inheritance
    class a{

    };
    class b: public a{

    };

    one base class and one derived class */


/*--->Multiple Inheritance 
    class a{

    };
    class b{

    };
    class c: public a,public b{

    };

    two base class and one derived class */


/*--->Hiearchical Inheritance
    class a{

    };
    class b:public a{

    };
    class c: public a{

    };

    one base class and two derived class */


/*--->Multilevel Inheritance 
    class a{                //grandparent

    };
    class b:public a{       //parent

    };
    class c: public b{      //child

    };

    one grandparent,one parent and one child */


/*--->Hybrid Inheritance (one grandparent,two parents and one child)
    class a{                     //grandparent

    };
    class b:public a{            //parent

    };
    class c: public a{          //parent
   
    };
    class d:public b,public c{  //child

    };

    one grandparent,two parent and one child */

    