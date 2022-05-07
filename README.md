# Programming Arcana

The Programming Arcana is an open source programming text book that focuses on teaching introductory programming concepts.

The guiding principles are:

- Transferable concepts are more important than language specifics
- Build concepts on top of known concepts as much as possible
- Focus on procedural programming initially, with a view to transitioning to objects
- Build programs that make it easy to see what is happening in the code

# Code formatter

We use [_clang-format_](https://clang.llvm.org/docs/ClangFormat.html) as our code format for this project.

## Installation

### Linux

_clang-format_ can be installed by:

```bash
sudo apt install clang-format
```

### macOS

_clang-format_ can be installed by:

```bash
brew install clang-format
```

### Windows

The executable file can be downloaded from [llvm org](https://llvm.org/builds/).

### Other

The _clang-format_ can also be installed with python and nodejs:

```bash
# python
python3 -m pip install clang-format

# nodejs
npm install -g clang-format
```

The [VS code extension](https://marketplace.visualstudio.com/items?itemName=xaver.clang-format). (optional, clang-format required)

## The format style

The base format style used is [_google_](https://google.github.io/styleguide/cppguide.html).

## Usage

To use the code formatter you can use command:

```bash
clang-format -i <file name>
```

Or if you have VS code extension installed you can use _right click_ -> _Format Document With ..._ option.

In order to recursively format all files, you can use command:

```bash
make format
```

## Validate Code

A python script from [Sarcasm](https://github.com/Sarcasm/run-clang-format) is used to validate the code.

For example, you can use check if the file _./code/c/array/array-copy.c_ needs to be formatted.

```bash
# use python instead of python3 if python version is 2
python3 ./run-clang-format.py  ./code/c/array/array-copy.c
```

The output would be

```
--- ./code/c/array/array-copy.c (original)
+++ ./code/c/array/array-copy.c (reformatted)
@@ -2,14 +2,13 @@

 #include <string.h>

-int main()
-{
-    int data[3] = {1, 2, 3};
-    int other_data[3];
-    int more_data[3];
-
-    memcpy(other_data, data, 3 * sizeof(int));
-    memcpy(more_data, data, sizeof(data));
-
-    return 0;
+int main() {
+  int data[3] = {1, 2, 3};
+  int other_data[3];
+  int more_data[3];
+
+  memcpy(other_data, data, 3 * sizeof(int));
+  memcpy(more_data, data, sizeof(data));
+
+  return 0;
 }%
```

# Branch Prefixes

When branching, try to prefix your branch with one of the following:

| Prefix     | Description                                                               | Example                                    |
| ---------- | ------------------------------------------------------------------------- | ------------------------------------------ |
| `feature/` | New feature was added                                                     | `feature/add-learning-outcome-alignment`   |
| `fix/`     | A bug was fixed                                                           | `fix/crash-when-code-submission-finished`  |
| `enhance/` | Improvement to existing feature, but not visual enhancement (See `LOOKS`) | `enhance/allow-code-files-to-be-submitted` |
| `looks/`   | UI Refinement, but not functional change (See `ENHANCE`)                  | `looks/rebrand-ui-for-version-2-marketing` |
| `quality/` | Refactoring of existing code                                              | `quality/make-code-convention-consistent`  |
| `doc/`     | Documentation-related changes                                             | `doc/add-new-api-documentation`            |
| `config/`  | Project configuration changes                                             | `config/add-framework-x-to-project`        |
| `speed/`   | Performance-related improvements                                          | `speed/new-algorithm-to-process-foo`       |
| `test/`    | Test addition or enhancement                                              | `test/unit-tests-for-new-feature-x`        |

# Commit Message Format

We have precise rules over how our Git commit messages must be formatted. This format makes it easier to read the commit history.

Each commit message consists of a header, a body, and a footer.

```text
<header>
<BLANK LINE>
<body>
<BLANK LINE>
<footer>
```

The `header` is mandatory and must conform to the Commit Message Header format.

The `body` is recommended for all commits. When the body is present, it must be at least 20 characters long and conform to the Commit Message Body format.

The `footer` is optional. The Commit Message Footer format describes the purpose and structure of the footer.

Any line of the commit message should be 100 characters or fewer.

```text
Commit Message Header
<type>(<scope>): <short summary>
  │       │             │
  │       │             └─⫸ Summary in present tense. Not capitalized. No period at the end.
  │       │
  │       └─⫸ Commit Scope (optional): animations|common|style|forms|http|router|service-worker|
  │                                     upgrade|changelog|dev-infra|docs-infra|migrations|
  │
  └─⫸ Commit Type: build|ci|docs|feat|fix|perf|refactor|test
```

The `<type>` and `<summary>` fields are mandatory, the `(<scope>)` field is optional.

The `<type>` must be one of the following:

- **build**: Changes that affect the build system or external dependencies (example scopes: gulp, broccoli, npm)
- **ci**: Changes to our CI configuration files and scripts (example scopes: Circle, BrowserStack, SauceLabs)
- **docs**: Documentation only changes
- **feat**: A new feature
- **fix**: A bug fix
- **perf**: A code change that improves performance
- **refactor**: A code change that neither fixes a bug nor adds a feature
- **test**: Adding missing tests or correcting existing tests

We recommend reading Chris Beam's post on [How to Write Good Commit Messages](http://chris.beams.io/posts/git-commit/).
