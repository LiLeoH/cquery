void foo() {
  int a;
  a = 1;
  {
    int a;
    a = 2;
  }
  a = 3;
}
/*
OUTPUT:
{
  "funcs": [{
      "id": 0,
      "usr": "c:@F@foo#",
      "short_name": "foo",
      "qualified_name": "foo",
      "definition": "1:1:6",
      "uses": ["1:1:6"]
    }],
  "vars": [{
      "id": 0,
      "usr": "c:function_shadow_local.cc@16@F@foo#@a",
      "short_name": "a",
      "qualified_name": "a",
      "definition": "1:2:7",
      "uses": ["1:2:7", "1:3:3", "1:8:3"]
    }, {
      "id": 1,
      "usr": "c:function_shadow_local.cc@43@F@foo#@a",
      "short_name": "a",
      "qualified_name": "a",
      "definition": "1:5:9",
      "uses": ["1:5:9", "1:6:5"]
    }]
}
*/