from flask import Flask

app = Flask(__name__)

x=0

@app.route("/")
def root():
    return "Hello World"

@app.route("/show/")
def show():
    return "x is " + str(x)

@app.route("/incr_by/<int:n>")
def incr_by(n):
    global x
    x += n
    return "x has been incremented by "+str(n)

if __name__== "__main__":
    app.run(host="0.0.0.0", port=8000, debug=True)