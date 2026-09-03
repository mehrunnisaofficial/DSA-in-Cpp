<div align="center">
⋆˚꩜｡
</div>
<div align="center">
<img src="https://readme-typing-svg.demolab.com?font=Times+New+Roman&weight=1000&size=55&duration=3000&pause=5000&color=E1DCC9&center=true&vCenter=true&width=800&lines=Introduction+of+CPP" alt="Introduction of CPP"/>
</div>

<div align="center">

> *give it a STAR* ♡

</div>

---

# Table of Contents .✦ ݁˖

1. [What is a C++ Program?](#1-what-is-a-c-program)
2. [Your First C++ Program](#2-your-first-c-program)
3. [Understanding the Structure of the Program](#3-understanding-the-structure-of-the-program)
4. [Preprocessor](#4-preprocessor)
5. [Header Files](#5-header-files)
6. [`#include`](#6-include)
7. [The `<iostream>` Header](#7-the-iostream-header)
8. [`using namespace std`](#8-using-namespace-std)
9. [What is `main()`?](#9-what-is-main)
10. [Curly Braces `{ }`](#10-curly-braces)
11. [Statements in C++](#11-statements-in-c)
12. [`cout` — Printing Output](#12-cout--printing-output)
13. [The `<<` Operator](#13-the--operator)
14. [Printing Multiple Things Using `cout`](#14-printing-multiple-things-using-cout)
15. [`endl`](#15-endl)
16. [`\n` — Newline Escape Sequence](#16-n--newline-escape-sequence)
17. [`endl` vs `\n`](#17-endl-vs-n)
18. [Comments in C++](#18-comments-in-c)
19. [Single-Line Comments](#19-single-line-comments)
20. [Multi-Line Comments](#20-multi-line-comments)
21. [Boilerplate Code](#21-boilerplate-code)
22. [Is Boilerplate Code Always Required?](#22-is-boilerplate-code-always-required)
23. [Compilation — Turning C++ Into a Program](#23-compilation--turning-c-into-a-program)
24. [Running Your C++ Program](#24-running-your-c-program)
25. [Windows vs macOS Executables](#25-windows-vs-macos-executables)
26. [The Complete Structure Mapped Out](#26-the-complete-structure-mapped-out)
27. [Quick Revision Sheet](#27-quick-revision-sheet)

---

## 1. What is a C++ Program?

Okay bestie, before we start typing random `#` symbols and pretending we know what we're doing, let's slow down.

A **program** is just... a set of instructions. That's it. That's the whole plot twist. No cap.

You're basically bossing the computer around like:

> "Do this."

Then:

> "Now do this."

Then:

> "Now show me the results, and don't be slow about it."

C++ is the **language** we use to boss the computer around in a way it actually understands (well, technically the *compiler* understands it, the computer is just vibing with 1s and 0s).

Example:

```cpp
cout << "Hello World";
```

Translation for the computer:

> **"Display 'Hello World' on the screen. Thanks. Bye."**

### In simple words:

* **C++** → the language we're speaking to the computer in
* **Program** → the to-do list we wrote for it
* **Compiler** → the translator that converts our human-ish code into machine code
* **Output** → the receipt the computer hands back after it does the job

> **Formal Definition:**
> A C++ program is a sequence of instructions written using the syntax and rules of the C++ programming language to perform a particular task.

Not that scary when you say it like that, right? Right.

---

## 2. Your First C++ Program

Every single programmer, since the dawn of time, has started with this exact program. It's basically a rite of passage. A digital baptism.

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << "Hello World";

    return 0;
}
```

Run it, and the terminal humbly replies:

```text
Hello World
```

Looks small. Looks harmless. Looks like "oh this is easy."

**It is lying to you.** There's a whole backstage crew working behind this one line of output. Let's meet the cast.

---

## 3. Understanding the Structure of the Program

Let's stare at it one more time, but this time with less fear:

```cpp
#include <iostream>

using namespace std;

int main() {

    cout << "Hello World";

    return 0;
}
```

Break it down like a group project (except this time everyone actually does their part):

```text
#include <iostream>
        ↓
Bring in the required library functionality

using namespace std;
        ↓
Tell C++ which namespace we're using

int main()
        ↓
Starting point of the program

{
        ↓
Beginning of main's body

cout << "Hello World";
        ↓
Print something

return 0;
        ↓
Program finished successfully

}
        ↓
End of main's body
```

Instead of one scary intimidating block, it's just **six small, non-scary pieces** standing on top of each other's shoulders in a trench coat pretending to be one program.

---

## 4. Preprocessor

Let's talk about this weird little guy:

```cpp
#include <iostream>
```

That `#` symbol at the start is not just decoration — it's actually a signal flare.

Before your code even *reaches* the compiler, there's a step called **preprocessing**.

The **preprocessor** is basically the intern that handles anything starting with `#`, before the "real" compiler even shows up to work.

These `#`-starting instructions are called **preprocessor directives**.

Example:

```cpp
#include <iostream>
```

Breakdown:

```text
#
↓
"Hey, this is a preprocessor instruction"

include
↓
"Please include something for me"

<iostream>
↓
"Specifically, this header file"
```

So basically:

> `#include <iostream>` is a preprocessor directive that tells the preprocessor to include the contents/declarations provided by the `iostream` header.

### Important:

The preprocessor does its thing **before** actual compilation starts. It's like the assistant who preps the meeting room before the boss (compiler) walks in.

Simplified pipeline:

```text
Your C++ Source Code
        ↓
   Preprocessor
        ↓
    Compiler
        ↓
   Object Code
        ↓
     Linker
        ↓
   Executable
```

You do **not** need to memorize this whole pipeline right now, chill. For Lecture 1, just lock in this one fact:

> **Preprocessor = the early-stage helper that handles directives such as `#include`.**

---

## 5. Header Files

So what exactly is this mysterious thing?

```cpp
<iostream>
```

This is called a **header** (a header *file*, to be exact).

Header files give your program access to declarations and functionality it doesn't have by default.

Think of a header file as a **toolbox**. 🧰

You need a specific tool? You open the toolbox that has it. You don't build the tool from scratch every time — that would be unserious.

Example:

```cpp
#include <iostream>
```

This gives you access to standard input/output tools like:

```cpp
cout
cin
```

which you'll be using constantly (`cout` today, `cin` very soon).

### Simple analogy:

```text
Header file
     ↓
   TOOLBOX
     ↓
Contains useful tools
     ↓
Your program can now use them
```

> **Formal Definition:**
> A header file is a file containing declarations and other information that can be included in a C++ program to provide access to required functionality.

---

## 6. `#include`

Let's zoom into just this part:

```cpp
#include
```

`#include` is literally the preprocessor's way of saying "go fetch this header for me."

Example:

```cpp
#include <iostream>
```

Mentally translate this as:

> **"Include the iostream header so I can use its stuff."**

General syntax:

```cpp
#include <header-name>
```

Example:

```cpp
#include <iostream>
```

Don't stress about memorizing every header that exists — that's a marathon, not a sprint. For basic console input/output right now, the one that matters is:

```cpp
#include <iostream>
```

---

## 7. The `<iostream>` Header

`iostream` isn't a random word, it stands for:

> **Input/Output Stream**

It gives you the standard tools for handling input and output.

The star of today's lecture from this header:

```cpp
cout
```

used for output. And coming up soon in your syllabus (not today, staying on topic 🙏):

```cpp
cin
```

used for input.

Example:

```cpp
#include <iostream>

cout << "Hello";
```

If you skip including the header properly, the compiler basically goes "bro I don't know what `cout` even is" and throws an error.

Cheat sheet to remember:

```text
<iostream>
    ↓
Input / Output
    ↓
cout → output
cin  → input
```

---

## 8. `using namespace std`

Next mystery line:

```cpp
using namespace std;
```

This introduces a new concept:

## Namespace

A **namespace** is basically a way to organize names in C++ so that different pieces of code don't clash and start fighting over the same variable/function name. Think of it as everyone's last name at a family gathering so nobody gets confused between the fifty people named "Raj."

The standard C++ library lives inside a namespace called:

```cpp
std
```

So technically, `cout` actually belongs to `std`. Its full "government name" is:

```cpp
std::cout << "Hello";
```

But writing `std::` before literally everything gets exhausting real quick. So when you write:

```cpp
using namespace std;
```

you're telling the compiler: "hey, just assume I mean `std` stuff unless I say otherwise," so you can just write:

```cpp
cout << "Hello";
```

Without it, you're stuck writing:

```cpp
std::cout << "Hello";
```

every single time. No thanks.

### Important distinction

`std` → the namespace (the "last name")

`cout` → the object provided by the standard library (the "first name")

Together:

```cpp
std::cout
```

means:

> `cout`, specifically the one that belongs to the `std` namespace.

---

## 9. What is `main()`?

Now for the actual main character of the program (pun very much intended):

```cpp
int main()
```

This is the **main function**. In a normal C++ program, execution *starts* here. Everything begins at `main()`. It's basically the front door of your program — nothing happens until someone walks through it.

```text
          PROGRAM
             ↓
          main()
             ↓
     Start executing here
```

Example:

```cpp
int main() {

    cout << "Hello";

    return 0;
}
```

Whatever is written inside `main()`'s body runs when the program starts.

### But what does `int` mean here?

`int` is the **return type** of `main()` — meaning `main()` is expected to hand back an integer value when it's done.

We'll get into data types properly later (staying on topic, I promise), but for now just know:

```cpp
int main()
```

means "`main()` returns an integer."

And at the very end:

```cpp
return 0;
```

sends back `0`, which conventionally means "everything ran successfully, no errors, we chilling."

---

## 10. Curly Braces `{ }`

Peep these two symbols:

```cpp
int main() {

    cout << "Hello";

    return 0;
}
```

```cpp
{
}
```

These are **curly braces**, sometimes just called **braces**.

They mark the **body** (the block of code) belonging to `main()`.

Everything between the opening `{` and the closing `}` belongs to that function — like a fence around main's little yard.

```cpp
int main() {

    // code here

}
```

means:

```text
main()
  ↓
{
    body of main
}
```

Fun (mildly traumatic) fact: you will see `{ }` **everywhere** for the rest of your C++ journey — functions, `if` statements, loops, classes, all of it. So make peace with them now. 😭

---

## 11. Statements in C++

Look at this line:

```cpp
cout << "Hello World";
```

This is called a **statement** — basically one complete instruction telling the program to do a single action.

Another statement:

```cpp
return 0;
```

Notice the pattern? Both of them end with:

```cpp
;
```

That's the **semicolon**, and in C++ it's basically the full stop at the end of a sentence.

```cpp
cout << "Hello";
return 0;
```

Think of `;` as saying:

> **"Okay, this instruction is done. Next."**

### Important:

The semicolon is a required part of C++ syntax, not a decorative choice.

Example of what *not* to do:

```cpp
cout << "Hello"
```

This can throw a syntax error because the statement was never properly "closed." The compiler will side-eye you very hard.

---

## 12. `cout` — Printing Output

Time to meet your new best friend:

```cpp
cout
```

`cout` sends output to the standard output stream — usually your console/terminal.

Example:

```cpp
cout << "Hello World";
```

Output:

```text
Hello World
```

Mental model:

```text
cout
 ↓
"Hey computer, show this on the screen."
```

### Another example:

```cpp
cout << "My name is Mehruu";
```

Output:

```text
My name is Mehruu
```

> **Formal Definition:**
> `cout` is the standard C++ output stream object used to send data to the standard output, typically the console.

---

## 13. The `<<` Operator

This little guy right here:

```cpp
cout << "Hello";
```

```cpp
<<
```

is called the **insertion operator** when it's paired with `cout`.

Its whole job: shove the data on its right *into* the output stream.

```text
cout << "Hello";
  ↑
send "Hello" to cout
```

So:

```cpp
cout << "Hello";
```

means:

> Send `"Hello"` into the output stream, please and thank you.

Later you'll also use it for variables:

```cpp
cout << age;
```

Or combine text and values like a mixtape:

```cpp
cout << "Age: " << age;
```

---

## 14. Printing Multiple Things Using `cout`

Good news: you don't need a fresh `cout` for every crumb of text. You can chain multiple `<<` in a row like a train:

```cpp
cout << "Hello " << "World";
```

Output:

```text
Hello World
```

You can also mix text and numbers:

```cpp
cout << "My age is " << 20;
```

Output:

```text
My age is 20
```

So generally:

```cpp
cout << A << B << C;
```

works like:

```text
Send A
   ↓
Send B
   ↓
Send C
   ↓
Output
```

One `cout`, one continuous stream of stuff being dumped onto the screen in order. Efficient. Iconic.

---

## 15. `endl`

You've also seen:

```cpp
cout << "Hello World" << endl;
```

`endl` pushes the cursor down to the next line, kind of like hitting Enter after typing a message.

Example:

```cpp
cout << "Hello" << endl;
cout << "World";
```

Output:

```text
Hello
World
```

Think of `endl` as saying:

> **"Wrap up this line, we're moving downstairs now."**

### Example

```cpp
cout << "First" << endl;
cout << "Second" << endl;
cout << "Third";
```

Output:

```text
First
Second
Third
```

---

## 16. `\n` — Newline Escape Sequence

You also met:

```cpp
\n
```

This is a **newline escape sequence** — basically `endl`'s quieter, more low-key cousin.

Example:

```cpp
cout << "Hello\nWorld";
```

Output:

```text
Hello
World
```

Visual breakdown:

```text
Hello
     ↓
    \n
     ↓
move to next line
     ↓
World
```

You can also write it as:

```cpp
cout << "Hello\n";
cout << "World";
```

Output:

```text
Hello
World
```

Or go full paragraph mode:

```cpp
cout << "Hello\nWorld\nAgain";
```

Output:

```text
Hello
World
Again
```

---

## 17. `endl` vs `\n`

Big exam-favorite question, so pay attention here. 👀

Both can move output to a new line:

```cpp
cout << "Hello" << endl;
```

and:

```cpp
cout << "Hello\n";
```

Both give you:

```text
Hello
```

with whatever comes next appearing on a fresh line.

But they're **not** secretly the same thing under the hood.

### `\n`

```cpp
cout << "Hello\n";
```

Just adds a newline character. Simple, quick, minding its own business.

### `endl`

```cpp
cout << "Hello" << endl;
```

Adds a newline **and flushes the output stream** (basically forces everything waiting in the buffer to get printed immediately, instead of chilling in line).

For beginner-level programs, you honestly won't notice a real difference. But in performance-sensitive code, repeatedly calling `endl` can be slower because of all that flushing.

Beginner rule of thumb to remember for the exam:

> **Use `\n` for ordinary newlines; use `endl` when you specifically need a flush.**

---

## 18. Comments in C++

Let's address the green (or grey, depending on your editor theme) text you keep seeing scattered around your code.

Example:

```cpp
// Multiple ways to print the output
```

This is a **comment**.

Comments exist purely for **humans**, not the compiler. The compiler completely ignores them — it will not execute them, judge them, or care about them at all.

You use comments to:

* explain what code does
* leave notes for future-you (who will absolutely forget everything)
* remind yourself of your logic
* temporarily "turn off" a piece of code without deleting it
* make big programs less of a headache to read

Example:

```cpp
// This prints my name
cout << "Mehruu";
```

The computer runs:

```cpp
cout << "Mehruu";
```

and completely skips over:

```cpp
// This prints my name
```

like it doesn't even exist. Because to the compiler, it doesn't.

---

## 19. Single-Line Comments

A single-line comment starts with:

```cpp
//
```

Example:

```cpp
// This is a comment
```

Everything after `//` on that same line is treated as a comment — the compiler stops caring the moment it sees `//`.

Example:

```cpp
cout << "Hello"; // Prints Hello
```

The compiler treats:

```cpp
cout << "Hello";
```

as actual code to run, and:

```cpp
// Prints Hello
```

as a comment that gets completely ignored.

### Multiple single-line comments

```cpp
// This is line one
// This is line two
// This is line three
```

Each line needs its own `//` — there's no "carry over" between lines.

---

## 20. Multi-Line Comments

Writing `//` on every single line gets old fast. Enter the **block comment**, C++'s way of letting you write an essay without repeating yourself.

Start with:

```cpp
/*
```

and end with:

```cpp
*/
```

Example:

```cpp
/*
This is a
multi-line
comment.
*/
```

Everything sandwiched between `/*` and `*/` is treated as a comment, no matter how many lines it spans.

This is especially handy when you want to temporarily disable a whole chunk of code without deleting it (every programmer's favorite move when debugging).

### Example

```cpp
/*
cout << "Hello";
cout << "World";
cout << "Again";
*/
```

None of these three `cout` statements will execute — they're all trapped inside the comment block.

---

## 21. Boilerplate Code

Time for a topic you specifically studied, so let's give it the respect it deserves.

You wrote:

```cpp
#include <iostream>
using namespace std;

int main() {

    return 0;
}
```

This is commonly known as **boilerplate code**, or a **basic program skeleton**.

Why the fancy name? Because it acts as a standard starting structure that shows up across tons of simple C++ programs, over and over again — kind of like how every group project starts with someone making a title slide nobody reads.

Think of it as the **skeleton of a body**:

```text
          C++ PROGRAM
               ↓
       ┌───────────────┐
       │ #include      │
       │               │
       │ namespace     │
       │               │
       │ main()        │
       │   {           │
       │      code     │
       │   }           │
       └───────────────┘
```

You then stuff your actual instructions inside `main()`. Example:

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << "Hello World";

    return 0;
}
```

### A useful way to picture it:

Think about how a **language** is built:

```text
Sentence
   ↓
Words
   ↓
Letters
```

Letters are the basic building blocks of writing. Similarly, boilerplate gives you a basic **structural starting point** for many C++ programs.

But don't take the analogy too literally — boilerplate isn't some sacred, unbreakable rulebook that *every* C++ program must follow to the letter.

---

## 22. Is Boilerplate Code Always Required?

Important correction, keep this one bolded in your brain for the exam.

You might hear someone dramatically claim:

> "Every C++ program MUST have exactly this boilerplate."

That statement is a little too extra.

This:

```cpp
#include <iostream>
using namespace std;

int main() {

    return 0;
}
```

is a **common beginner starting structure**, not some rigid universal template that every single `.cpp` file on Earth must contain word-for-word.

For example:

```cpp
using namespace std;
```

is **not mandatory**. You could instead write:

```cpp
#include <iostream>

int main() {

    std::cout << "Hello";

    return 0;
}
```

And `#include <iostream>` is only needed when your program actually uses stuff from that header (like `cout` or `cin`) — if your program doesn't need I/O, you technically don't need it at all.

So remember for the exam:

> **Boilerplate = commonly repeated starting code/structure, NOT "every single line is mandatory in every C++ program."**

---

## 23. Compilation — Turning C++ Into a Program

You've written this beautiful piece of code:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello";
    return 0;
}
```

But plot twist: your CPU has absolutely no idea what to do with this text file directly. It doesn't read English-adjacent code, it reads machine instructions. So we need a translator.

That translator is called a **compiler**.

A compiler takes your C++ source code and converts it into something the computer can actually execute.

Very simplified view:

```text
C++ Source Code
      ↓
   Compiler
      ↓
Machine/Executable Code
      ↓
     Run
      ↓
    Output
```

This is exactly why you type something like:

```bash
g++ code.cpp
```

`g++` is a widely used C++ compiler driver — basically the tool doing all the heavy lifting of translation for you.

---

## 24. Running Your C++ Program

There are two very distinct steps here, and mixing them up is a classic beginner "why isn't this working" moment.

### Step 1 — Compile

```bash
g++ code.cpp
```

This turns your source code into an executable file. Note: this step does **not** run your program, it just prepares it.

### Step 2 — Run

On Windows (depending on your setup):

```bash
./a.exe
```

On macOS/Linux, commonly:

```bash
./a.out
```

Conceptually:

```text
code.cpp
   ↓
g++ code.cpp
   ↓
executable
   ↓
./executable
   ↓
output
```

Two separate steps, two separate vibes: **build it**, then **run it**.

---

## 25. Windows vs macOS Executables

This explains why your friend on Windows and you on Mac might be typing completely different commands and both be 100% correct.

### Windows

Default executable name is usually:

```text
a.exe
```

Run it with:

```bash
./a.exe
```

### macOS/Linux

Default executable name is usually:

```text
a.out
```

Run it with:

```bash
./a.out
```

You're also not stuck with these generic default names — you can pick your own, which honestly feels way more organized:

```bash
g++ code.cpp -o program
```

Then run:

```bash
./program
```

Cleaner. Chic. No random `a.exe` floating around your folder confusing you later.

---

## 26. The Complete Structure Mapped Out .✦ ݁˖

Here's the entire lecture squished into one big mental map:

```text
                    C++ PROGRAM
                         │
                         ▼
               ┌──────────────────┐
               │ Source Code      │
               │     code.cpp     │
               └────────┬─────────┘
                        │
                        ▼
              ┌────────────────────┐
              │   Preprocessor     │
              │                    │
              │ #include <iostream>│
              └─────────┬──────────┘
                        │
                        ▼
              ┌────────────────────┐
              │     Compiler       │
              │       g++          │
              └─────────┬──────────┘
                        │
                        ▼
                Executable File
                        │
                        ▼
                    Run Program
                        │
                        ▼
              ┌────────────────────┐
              │      main()        │
              │                    │
              │  cout << "Hello";  │
              │                    │
              │    return 0;       │
              └─────────┬──────────┘
                        │
                        ▼
                     OUTPUT
```

And zooming inside the code itself:

```text
#include <iostream>
        │
        └── Header required for I/O facilities

using namespace std;
        │
        └── Allows names from std namespace
            to be used without std::

int main()
        │
        └── Main function / starting point

{
        │
        └── Beginning of function body

cout << "Hello World";
        │
        ├── cout → output stream
        ├── <<   → insertion operator
        └── "Hello World" → data being output

return 0;
        │
        └── returns 0 from main

}
        │
        └── End of function body
```

---

## 27. Quick Revision Sheet .✦ ݁˖

*(the "read this 5 minutes before the exam" section)*

### C++ Program
A set of instructions written in C++ to perform a task.

### `#include`
A preprocessor directive used to include a header.
```cpp
#include <iostream>
```

### `<iostream>`
Header providing standard input/output facilities such as `cout` and `cin`.

### `using namespace std;`
Allows names from the `std` namespace to be used without repeatedly writing `std::`.

### `main()`
The main function from which execution of a normal C++ program begins.

### `{ }`
Define the body/block of a function or other C++ construct.

### `cout`
Used for standard console output.
```cpp
cout << "Hello";
```

### `<<`
Insertion operator used with `cout` to send data to the output stream.

### `endl`
Moves output to the next line **and flushes the stream**.
```cpp
cout << "Hello" << endl;
```

### `\n`
Newline escape sequence.
```cpp
cout << "Hello\n";
```

### `//`
Single-line comment.
```cpp
// This is a comment
```

### `/* */`
Multi-line comment.
```cpp
/*
This is
a comment
*/
```

### Boilerplate
Commonly repeated starting structure/code used as a foundation for a program (not a mandatory universal rule).

### Compiler
Translates C++ source code into executable/object code as part of the build process.

### `g++`
A commonly used C++ compiler driver.
```bash
g++ code.cpp
```

### Executable
The program produced by the compilation/linking process that can be run by the operating system.

---

## 🧠 The ONE thing I want you to understand from Lecture 1

Do not — I repeat, **do not** — try to memorize this whole thing as one giant magical incantation:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}
```

Instead, treat it as **Lego pieces** that snap together:

```text
#include <iostream>
        ↓
"I need input/output functionality"

using namespace std;
        ↓
"I want convenient access to std names"

int main()
        ↓
"Here is the main function"

{
        ↓
"Start of its body"

cout << "Hello World";
        ↓
"Print this"

return 0;
        ↓
"Finish main and return 0"

}
        ↓
"End of main"
```

Once these individual pieces click for you, C++ stops feeling like:

> `#include iostream WHAT IS THIS 😭`

and starts feeling like an actual language made of small, understandable, learnable parts. You've got this. 🫡

---

<div align="center">
⋆˚꩜｡
</div>
<div align="center">
<img src="https://readme-typing-svg.demolab.com?font=Times+New+Roman&weight=700&size=45&duration=1800&pause=700&color=E1DCC9&center=true&vCenter=true&width=600&lines=FOLLOW+ME" alt="Follow Me"/>
</div>

If you enjoyed these notes, you'll probably enjoy the rest too.

| Platform | Link |
|---|---|
| Instagram | @mehrunnisa.ai |
| SubStack | The Epoch |
| YouTube | @mehrunnisa.ai |

**Usage Terms**

These notes are free to use for personal learning, revision, and study. Please do not:
- Sell or redistribute for profit.
- Claim them as your own work.
- Modify and republish without permission.
- Use for any unethical or unauthorized purpose.

Thank you for respecting the effort behind these notes. Happy learning. ♡
</div>