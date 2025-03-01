// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.


@class MSGraphConfigurationManagerClientEnabledFeatures, MSGraphDeviceActionResult, MSGraphDeviceHealthAttestationState, MSGraphDeviceCompliancePolicyState, MSGraphDeviceConfigurationState, MSGraphDeviceCategory; 
#import "MSGraphComplianceState.h"
#import "MSGraphDeviceEnrollmentType.h"
#import "MSGraphDeviceRegistrationState.h"
#import "MSGraphDeviceManagementExchangeAccessState.h"
#import "MSGraphDeviceManagementExchangeAccessStateReason.h"
#import "MSGraphManagedDeviceOwnerType.h"
#import "MSGraphManagementAgentType.h"
#import "MSGraphManagedDevicePartnerReportedHealthState.h"


#import "MSGraphEntity.h"

@interface MSGraphManagedDevice : MSGraphEntity

  @property (nullable, nonatomic, setter=setActivationLockBypassCode:, getter=activationLockBypassCode) NSString* activationLockBypassCode;
    @property (nullable, nonatomic, setter=setAndroidSecurityPatchLevel:, getter=androidSecurityPatchLevel) NSString* androidSecurityPatchLevel;
    @property (nullable, nonatomic, setter=setAzureADDeviceId:, getter=azureADDeviceId) NSString* azureADDeviceId;
    @property (nonatomic, setter=setAzureADRegistered:, getter=azureADRegistered) BOOL azureADRegistered;
    @property (nonnull, nonatomic, setter=setComplianceGracePeriodExpirationDateTime:, getter=complianceGracePeriodExpirationDateTime) NSDate* complianceGracePeriodExpirationDateTime;
    @property (nonnull, nonatomic, setter=setComplianceState:, getter=complianceState) MSGraphComplianceState* complianceState;
    @property (nullable, nonatomic, setter=setConfigurationManagerClientEnabledFeatures:, getter=configurationManagerClientEnabledFeatures) MSGraphConfigurationManagerClientEnabledFeatures* configurationManagerClientEnabledFeatures;
    @property (nullable, nonatomic, setter=setDeviceActionResults:, getter=deviceActionResults) NSArray* deviceActionResults;
    @property (nullable, nonatomic, setter=setDeviceCategoryDisplayName:, getter=deviceCategoryDisplayName) NSString* deviceCategoryDisplayName;
    @property (nonnull, nonatomic, setter=setDeviceEnrollmentType:, getter=deviceEnrollmentType) MSGraphDeviceEnrollmentType* deviceEnrollmentType;
    @property (nullable, nonatomic, setter=setDeviceHealthAttestationState:, getter=deviceHealthAttestationState) MSGraphDeviceHealthAttestationState* deviceHealthAttestationState;
    @property (nullable, nonatomic, setter=setDeviceName:, getter=deviceName) NSString* deviceName;
    @property (nonnull, nonatomic, setter=setDeviceRegistrationState:, getter=deviceRegistrationState) MSGraphDeviceRegistrationState* deviceRegistrationState;
    @property (nonatomic, setter=setEasActivated:, getter=easActivated) BOOL easActivated;
    @property (nonnull, nonatomic, setter=setEasActivationDateTime:, getter=easActivationDateTime) NSDate* easActivationDateTime;
    @property (nullable, nonatomic, setter=setEasDeviceId:, getter=easDeviceId) NSString* easDeviceId;
    @property (nullable, nonatomic, setter=setEmailAddress:, getter=emailAddress) NSString* emailAddress;
    @property (nonnull, nonatomic, setter=setEnrolledDateTime:, getter=enrolledDateTime) NSDate* enrolledDateTime;
    @property (nullable, nonatomic, setter=setEthernetMacAddress:, getter=ethernetMacAddress) NSString* ethernetMacAddress;
    @property (nonnull, nonatomic, setter=setExchangeAccessState:, getter=exchangeAccessState) MSGraphDeviceManagementExchangeAccessState* exchangeAccessState;
    @property (nonnull, nonatomic, setter=setExchangeAccessStateReason:, getter=exchangeAccessStateReason) MSGraphDeviceManagementExchangeAccessStateReason* exchangeAccessStateReason;
    @property (nonnull, nonatomic, setter=setExchangeLastSuccessfulSyncDateTime:, getter=exchangeLastSuccessfulSyncDateTime) NSDate* exchangeLastSuccessfulSyncDateTime;
    @property (nonatomic, setter=setFreeStorageSpaceInBytes:, getter=freeStorageSpaceInBytes) int64_t freeStorageSpaceInBytes;
    @property (nullable, nonatomic, setter=setIccid:, getter=iccid) NSString* iccid;
    @property (nullable, nonatomic, setter=setImei:, getter=imei) NSString* imei;
    @property (nonatomic, setter=setIsEncrypted:, getter=isEncrypted) BOOL isEncrypted;
    @property (nonatomic, setter=setIsSupervised:, getter=isSupervised) BOOL isSupervised;
    @property (nullable, nonatomic, setter=setJailBroken:, getter=jailBroken) NSString* jailBroken;
    @property (nonnull, nonatomic, setter=setLastSyncDateTime:, getter=lastSyncDateTime) NSDate* lastSyncDateTime;
    @property (nullable, nonatomic, setter=setManagedDeviceName:, getter=managedDeviceName) NSString* managedDeviceName;
    @property (nonnull, nonatomic, setter=setManagedDeviceOwnerType:, getter=managedDeviceOwnerType) MSGraphManagedDeviceOwnerType* managedDeviceOwnerType;
    @property (nonnull, nonatomic, setter=setManagementAgent:, getter=managementAgent) MSGraphManagementAgentType* managementAgent;
    @property (nullable, nonatomic, setter=setManufacturer:, getter=manufacturer) NSString* manufacturer;
    @property (nullable, nonatomic, setter=setMeid:, getter=meid) NSString* meid;
    @property (nullable, nonatomic, setter=setModel:, getter=model) NSString* model;
    @property (nullable, nonatomic, setter=setNotes:, getter=notes) NSString* notes;
    @property (nullable, nonatomic, setter=setOperatingSystem:, getter=operatingSystem) NSString* operatingSystem;
    @property (nullable, nonatomic, setter=setOsVersion:, getter=osVersion) NSString* osVersion;
    @property (nonnull, nonatomic, setter=setPartnerReportedThreatState:, getter=partnerReportedThreatState) MSGraphManagedDevicePartnerReportedHealthState* partnerReportedThreatState;
    @property (nullable, nonatomic, setter=setPhoneNumber:, getter=phoneNumber) NSString* phoneNumber;
    @property (nonatomic, setter=setPhysicalMemoryInBytes:, getter=physicalMemoryInBytes) int64_t physicalMemoryInBytes;
    @property (nullable, nonatomic, setter=setRemoteAssistanceSessionErrorDetails:, getter=remoteAssistanceSessionErrorDetails) NSString* remoteAssistanceSessionErrorDetails;
    @property (nullable, nonatomic, setter=setRemoteAssistanceSessionUrl:, getter=remoteAssistanceSessionUrl) NSString* remoteAssistanceSessionUrl;
    @property (nullable, nonatomic, setter=setSerialNumber:, getter=serialNumber) NSString* serialNumber;
    @property (nullable, nonatomic, setter=setSubscriberCarrier:, getter=subscriberCarrier) NSString* subscriberCarrier;
    @property (nonatomic, setter=setTotalStorageSpaceInBytes:, getter=totalStorageSpaceInBytes) int64_t totalStorageSpaceInBytes;
    @property (nullable, nonatomic, setter=setUdid:, getter=udid) NSString* udid;
    @property (nullable, nonatomic, setter=setUserDisplayName:, getter=userDisplayName) NSString* userDisplayName;
    @property (nullable, nonatomic, setter=setUserId:, getter=userId) NSString* userId;
    @property (nullable, nonatomic, setter=setUserPrincipalName:, getter=userPrincipalName) NSString* userPrincipalName;
    @property (nullable, nonatomic, setter=setWiFiMacAddress:, getter=wiFiMacAddress) NSString* wiFiMacAddress;
    @property (nullable, nonatomic, setter=setDeviceCompliancePolicyStates:, getter=deviceCompliancePolicyStates) NSArray* deviceCompliancePolicyStates;
    @property (nullable, nonatomic, setter=setDeviceConfigurationStates:, getter=deviceConfigurationStates) NSArray* deviceConfigurationStates;
    @property (nullable, nonatomic, setter=setDeviceCategory:, getter=deviceCategory) MSGraphDeviceCategory* deviceCategory;
  
@end
