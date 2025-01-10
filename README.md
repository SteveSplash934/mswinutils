# mswinutils - Windows Utilities

`mswinutils` is a collection of essential utilities for Windows, providing common command-line tools found in Unix/Linux systems but not natively available on Windows. This repository aims to bring more flexibility and power to the Windows command line interface, with a set of utilities that improve productivity and streamline workflows.

## Features

- Provides a set of commonly used command-line tools for Windows.
- Easy-to-use utilities for tasks like file manipulation, searching, and text processing.
- Simple installation: just download and add to your system `PATH`.
- Available in precompiled binaries for quick setup or source code for those who wish to build it themselves.

## Installation

### Download Options

You have the following options for downloading `mswinutils`:

- **Binaries Only**: Download the precompiled binaries from the [Releases](https://github.com/SteveSplash934/mswinutils/releases) section for a quick and easy setup. Simply extract the files and add `C:\mswinutils\bin` to your system `PATH`.
- **Source Code Only**: If you prefer to build the tools yourself, download the source code from the [Releases](https://github.com/SteveSplash934/mswinutils/releases) section and follow the build instructions.
- **Both**: You can download both the binaries and source code if you want the convenience of ready-to-use tools along with access to the source.

### Steps for Installing Binaries

1. **Download** the latest release containing the precompiled binaries from the [Releases](https://github.com/SteveSplash934/mswinutils/releases) section.
2. **Extract** the downloaded archive to `C:\mswinutils`. The folder structure will look like this:

   ```
   C:\mswinutils
   ├── bin
   ```

   - The `bin` folder contains the compiled binaries of the utilities.

3. **Add `C:\mswinutils\bin` to your system `PATH`**:

   - Open the **Start Menu** and search for **Environment Variables**.
   - Click on **Edit the system environment variables**.
   - In the **System Properties** window, click on the **Environment Variables** button.
   - Under **System variables**, select the **Path** variable and click **Edit**.
   - Click **New** and add `C:\mswinutils\bin` to the list.
   - Click **OK** to save the changes.

4. **Verify installation** by opening a new Command Prompt (`cmd`) window and typing one of the installed utility commands:

   ```cmd
   utility-name --version
   ```

   Replace `utility-name` with the name of any installed utility. If everything is set up correctly, you should see the utility's version information.

## Building from Source

If you wish to build the utilities from source, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/SteveSplash934/mswinutils.git
   cd mswinutils
   ```

2. Open the solution file (`mswinutils.sln`) in Visual Studio and build the project.

   - The `src` folder contains the source code.
   - The `bin` folder will be populated with the compiled executables after the build.

## Contributing

We welcome contributions to `mswinutils`!

1. Fork the repository.
2. Create a new branch for your changes.
3. Make your changes and test them.
4. Submit a pull request with a description of your changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Thanks to the open-source community for inspiration and providing useful tools.
- Special thanks to contributors who help make this project better.
