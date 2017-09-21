import tornado.httpserver
import tornado.ioloop
import tornado.web
import tornado.options
import json

from tornado.options import define,options

define("port",default=8000,type=int)


class IndexHandler(tornado.web.RequestHandler):
    def get(self):
        # get param q
        #arg=self.get_argument('q','hello')
        #self.write(arg+'world!')
	a = {"a":1,"b":2,"c":[3,4]}
	self.set_header('Access-Control-Allow-Headers','x-requested-with,content-type')
	self.set_header('Access-Control-Allow-Origin','*')
	self.write(json.dumps(a))

	



if __name__== "__main__":
    tornado.options.parse_command_line()
    #path match
    app=tornado.web.Application(handlers=[(r"/",IndexHandler)])
    http_server=tornado.httpserver.HTTPServer(app)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.instance().start()



