/* Getting a value from another module within this directory */
let message = "Hello from " ++ Foo.camel;

/* Getting a value from an external library (specified in jbuild) */
let rx = Re.str("hello");
