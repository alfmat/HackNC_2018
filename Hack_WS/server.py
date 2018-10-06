from flask import Flask

app = Flask(__name__)

@app.route("/")
def root():
    return "Hello World"

@app.route("/intro/") 
def root3():
    return "Boop"

x=0

@app.route("/show/")
def show():
    return "x is " + str(x)

@app.route("/incr/")
def incr():
    global x
    x += 1
    return "x has been incremented"

@app.route("/incr_by/<int:n>")
def incr_by(n):
    global x
    x += n
    return "x has been incremented by" + str(n)

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=8000, debug=True)
    
