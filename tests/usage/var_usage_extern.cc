extern int a;

void foo() {
  a = 5;
}
/*
OUTPUT:
{
  "types": [],
  "functions": [{
      "id": 0,
      "usr": "c:@F@foo#",
      "short_name": "foo",
      "qualified_name": "foo",
      "definition": "*1:3:6",
      "all_uses": ["*1:3:6"]
    }],
  "variables": [{
      "id": 0,
      "usr": "c:@a",
      "short_name": "a",
      "qualified_name": "a",
      "declaration": "*1:1:12",
      "all_uses": ["*1:1:12", "*1:4:3"]
    }]
}
*/