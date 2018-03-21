let msg = "Hello from Reason!";

print_string(msg);
print_newline();

print_endline(Internal.Values.message);

let a = Lib.Answers.answer;
Printf.printf("Answer: %d\n", a);
