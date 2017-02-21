void called() {}

void caller() {
  auto x = &called;
  x();

  called();
}

/*
OUTPUT:
{
  "types": [],
  "functions": [{
      "id": 0,
      "usr": "c:@F@called#",
      "short_name": "called",
      "qualified_name": "called",
      "definition": "*1:1:6",
      "callers": ["1@*1:4:13", "1@*1:7:3"],
      "all_uses": ["*1:1:6", "*1:4:13", "*1:7:3"]
    }, {
      "id": 1,
      "usr": "c:@F@caller#",
      "short_name": "caller",
      "qualified_name": "caller",
      "definition": "*1:3:6",
      "callees": ["0@*1:4:13", "0@*1:7:3"],
      "all_uses": ["*1:3:6"]
    }],
  "variables": [{
      "id": 0,
      "usr": "c:var_usage_call_function.cc@39@F@caller#@x",
      "short_name": "x",
      "qualified_name": "x",
      "definition": "*1:4:8",
      "all_uses": ["*1:4:8", "*1:5:3"]
    }]
}
*/