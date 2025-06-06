#include <iostream>
#include <ostream>
#include <string>
#include <vector>

class Home {
  public:
    int nowData = 0;

  private:
    std::string nameOfHome;
    std::vector<std::string> dataNameHome;

  public:
    Home(const std::string& data) {
      if (!data.empty()) {
        dataNameHome.push_back(data);
        std::cout << "data dgn nama :" << data << " di tambah" << std::endl;
      }
    }

    ~Home() {
      dataNameHome.clear();
      std::cout << "Home class dibersihkan" << std::endl;
    }

    void setHomeName(const std::string& newNameHome) {
      nameOfHome.append(newNameHome);
    }

    void setDataNameHome(const std::string& newDataNameHome) {
      dataNameHome.push_back(newDataNameHome);
    }

    bool searchNameData(const std::string& dataName) {
      for (size_t i = 0; i < dataNameHome.size(); ++i) {
        if (dataNameHome[i] == dataName) {
          return true;
        }
      }
      return false;
    }

    void nextData(int* next) {
      (*next) += 1;
    }

    void prevData(int* prev) {
      (*prev) -= 1;
    }

    std::string showDataWithNowData() {
      if (nowData >= 0 && nowData < static_cast<int>(dataNameHome.size()))
        return dataNameHome[nowData];
      else
        return "Invalid Index";
    }
};

class Dapur : public Home {
  public:
    Dapur(const std::string& newDataDapur, const std::string& homeName)
      : Home(newDataDapur) {
      setHomeName(homeName);
    }
};

int main() {
  Dapur* dapurBgdar = new Dapur("pisau", "bgdar Home");

  dapurBgdar->setDataNameHome("brangkas");
  dapurBgdar->setDataNameHome("agus");

  std::cout << "apakah pisau ada  : "
    << (dapurBgdar->searchNameData("pisau") ? "true" : "false") << std::endl;

  std::cout << "Managements next and prev data :" << std::endl;
  dapurBgdar->nextData(&dapurBgdar->nowData);

  std::cout << "nowData saat ini: " << dapurBgdar->nowData << std::endl;
  std::cout << dapurBgdar->showDataWithNowData() << std::endl;

  delete dapurBgdar;
  return 0;
}

