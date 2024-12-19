import discord # py-cord
from discord.ext import commands
import json
import random
import os
from dotenv import load_dotenv
import logging

dir: str = "/home/raccoon/raccoon_bot/" # needed to run on my server can be commented out
load_dotenv()
logging.basicConfig(level=logging.INFO , format="%(asctime)s - %(message)s" , datefmt="%m-%d-%Y %H:%M:%S")

# FUNCTIONS
with open(dir + "overwatch_quotes.json", "r") as file:
    # remove "dir +" if you comment out dir variable
    data = json.load(file)

def get_quote():
    rand = random.choice(data["quotes"])
    response = f'"{rand["quote"]}" - {rand["person"]}'
    return response

client = commands.Bot(intents = discord.Intents.default())

@client.event
async def on_ready():
    logging.info(f"Logged in as {client.user} (ID: {client.user.id})")

# COMMANDS
@client.slash_command(name="hello" , description="Greets the user!")
async def hello(ctx, name: str = None):
    name = name or ctx.author.display_name
    await ctx.respond(f"""
        https://tenor.com/view/kiriko-kiriko-overwatch-kiriko-donut-kiriko-donuts-overwatch-gif-26882998
        \nLet the kitsune guide you, {name}!""")
    logging.info(f"\t{ctx.author.name} used the command HELLO")

@client.slash_command(name="overwatch-quote" , description="Sends a random Overwatch quote")
async def ow_quote(ctx):
    await ctx.respond(get_quote())
    logging.info(f"\t{ctx.author.name} used the command OVERWATCH QUOTES")

@client.slash_command(name="andrew-martin" , description="Sends a random cringey gif!")
async def test(ctx):
    await ctx.respond(f"{ctx.author.display_name} the type of guy to suck dick and still like women.")
    logging.info(f"\t{ctx.author.name} used the command ANDREW MARTIN CRINGE")

@client.slash_command(name="credits" , description="prints the credits for Raccoon Bot")
async def credits(ctx):
    await ctx.respond("Made by Diego R. (SanicSquirtle428)\nhttps://sanicsquirtle420.github.io")
    logging.info(f"\t{ctx.author.name} used the command CREDITS")

client.run(os.getenv("TOKEN")) # OR client.run("DISCORD-BOT-TOKEN")
