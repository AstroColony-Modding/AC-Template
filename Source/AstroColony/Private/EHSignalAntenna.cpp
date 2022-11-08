#include "EHSignalAntenna.h"

class UEHSignalReceiver;

void UEHSignalAntenna::SelectDevice(UEHSignalReceiver* SignalReceiverIn) {
}

void UEHSignalAntenna::CancelSignalReceiver() {
}

UEHSignalAntenna::UEHSignalAntenna() {
    this->SignalReceiver = NULL;
    this->SignalNetworkIn = NULL;
}

