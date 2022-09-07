using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Logging;
using MVC_app.Models;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;

namespace MVC_app.Controllers
{
    public class HomeController : Controller
    {
        private readonly ILogger<HomeController> _logger;

        public HomeController(ILogger<HomeController> logger)
        {
            _logger = logger;
        }

        public IActionResult Index()
        {
            return View("Login");
        }
        public IActionResult Sum(SumModel model)
        {
            model.result = model.num1 + model.num2;
            return View(model);
        }
        public IActionResult Login()
        {
            string username = this.Request.Form["username"];
            string password = this.Request.Form["password"];
            if (username == "Vadim" && password == "1234")
            {
                return Redirect("http://www.kntu.kr.ua");
            }
            else
            {
                return Content("Login Failed");
            }
        }

        public IActionResult Privacy()
        {
            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}
