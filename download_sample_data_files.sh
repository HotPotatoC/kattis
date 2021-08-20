# Downloads and extracts the sample data files from the kattis problem.
#
# Usage:
#   ./download_sample_data_files.sh <problem_id>
#
# Example:
#   ./download_sample_data_files.sh cold

wget -O data_samples/$1.zip https://open.kattis.com/problems/$1/file/statement/samples.zip

unzip data_samples/$1.zip -d data_samples/$1

rm data_samples/$1.zip
