# Skip this test if reversed() isn't built in.
import builtins
if "reversed" not in dir(builtins):
    print("SKIP")
    import sys
    sys.exit()

# case where close is propagated up to a built-in iterator
def gen8():
    g = reversed([2, 1])
    yield from g
g = gen8()
print(next(g))
g.close()
