from flask import Flask
app = Flask(__name__)

x = 0
@app.route("/")
def root():
    return "hello world"

@app.route("/show/")
def show():
    return "x is "+str(x)

@app.route("/incr/")
def incr():
    global x
    x = x+1
    return "X has been incremented"

@app.route("/incr_by/<int:n>/")
def incr_by(n):
    global x
    x = x+n
    return "X has been incremented by "+str(n)

if __name__ == "__main__":
<<<<<<< HEAD
    app.run(host= "0.0.0.0", port = 8000, debug = True) 
=======
    app.run(host= "0.0.0.0", port = 8000, debug = True)

>>>>>>> 45b1bfd6af6d1f6f3da7d3ee57ef3778d2d6fcbb
