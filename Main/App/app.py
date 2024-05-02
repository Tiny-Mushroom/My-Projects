from flask import Flask, render_template

App = Flask(__name__)

@App.route("/")
def home():
    return render_template("index.html")

@App.route("/contacts")
def contacts():
    return render_template("contacts.html")

@App.route("/aboutme")
def aboutme():
    return render_template("aboutme.html")

@App.route("/portfolio")
def portfolio():
    return render_template("portfolio.html")