# Tree-Sitter Kurt

A Tree Sitter grammar for Kurt, a language project.

I ended up giving up on using tree sitter becuase recovering error messages from it's parse tree was too inconsistent. I tried to use the query system to catalog and detect errors for better messages, but the context around the error effected how recovery happened too much for it to be predicatble.

There were a few smaller issues as well, such as `MISSING` nodes not setting of `has_error` so we needed two different strategies for detecting missing nodes versus detecting error nodes.

Tree sitter is an impressive project though. I'll definitly write a tree sitter parser again if I get to a point where I'm interested in tooling with a future language project.
