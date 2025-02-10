# OpenCV Template Project for Xcode

This is a template project for integrating OpenCV into an Xcode project using the `brew`-installed OpenCV library. Follow the steps below to set up and run the project.

## Prerequisites

Before using this project, ensure you have the following installed:

- **[Homebrew](https://brew.sh)** (If you don’t have Homebrew, install it first)
- **pkg-config** (Required for managing OpenCV linker flags)

### Install `opencv`
```bash
brew install opencv
```

### Install `pkg-config`

Run the following command in your terminal:

```bash
brew install pkg-config
```

### Get OpenCV Linker Flags

Linker flags are already setup for opencv4. If some are missings just replace them by the result of this command.


```bash
pkg-config --cflags --libs opencv4
```

### Repository Structure

This project relies on a relative repository for fetching files and images. Ensure that:

- You have cloned the repository correctly.
- Resources (such as images or data files) are placed in the expected directories.

### Troubleshooting

Troubleshooting

If you encounter issues:

- Ensure pkg-config is installed and working correctly.
- Verify that OpenCV is installed via Homebrew.
- Check that the repository structure is intact and required files are present.


Happy coding! 🚀

