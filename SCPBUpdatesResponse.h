/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSMutableArray, NSString, NSMutableDictionary, SCPBResetDisabledTranscodingState, SCPBFeatureSettings, SCPBAdAdPreferences, SCPBAdSourcesConfig, SCPBAdTrackInfo, SCPBAdAdProductsConfig, SCPBPromptMessage, SCPBIdentityLagunaGetLagunaDevicesResponse, SCPBVideoRecordingTranscodingConfig, SCPBBlizzardClientConfig, SCPBUnlockablesUnlockablesDirectAuthInfo;

@interface SCPBUpdatesResponse : GPBMessage

@property (nonatomic,retain) NSMutableArray * friendsArray; 
@property (nonatomic,readonly) unsigned long long friendsArray_Count; 
@property (nonatomic,copy) NSString * friendsSyncToken; 
@property (nonatomic,copy) NSString * friendsSyncType; 
@property (nonatomic,retain) NSMutableArray * addedFriendsArray; 
@property (nonatomic,readonly) unsigned long long addedFriendsArray_Count; 
@property (nonatomic,retain) NSMutableArray * bestsArray; 
@property (nonatomic,readonly) unsigned long long bestsArray_Count; 
@property (nonatomic,retain) NSMutableDictionary * extraFriendmojiMutableDict; 
@property (nonatomic,readonly) unsigned long long extraFriendmojiMutableDict_Count; 
@property (nonatomic,retain) NSMutableDictionary * extraFriendmojiReadOnlyDict; 
@property (nonatomic,readonly) unsigned long long extraFriendmojiReadOnlyDict_Count; 
@property (assign,nonatomic) BOOL logged; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * userId; 
@property (nonatomic,copy) NSString * bitmojiAvatarId; 
@property (assign,nonatomic) BOOL bitmojiHideDownloadPrompt; 
@property (assign,nonatomic) BOOL isVerifiedUser; 
@property (nonatomic,copy) NSString * authToken; 
@property (nonatomic,copy) NSString * deviceToken; 
@property (nonatomic,copy) NSString * blizzardToken; 
@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSString * mobile; 
@property (nonatomic,copy) NSString * mobileVerificationKey; 
@property (assign,nonatomic) BOOL enableVideoTranscodingAndroid; 
@property (nonatomic,retain) SCPBResetDisabledTranscodingState * resetDisabledTranscodingState; 
@property (assign,nonatomic) BOOL hasResetDisabledTranscodingState; 
@property (assign,nonatomic) BOOL enableImageTranscoding; 
@property (assign,nonatomic) BOOL transcodingProfileLevelConfigurationAndroid; 
@property (assign,nonatomic) BOOL enableLensesAndroid; 
@property (assign,nonatomic) BOOL enableRecordingHintAndroid; 
@property (assign,nonatomic) BOOL enableFastFrameRateCameraInitializationAndroid; 
@property (assign,nonatomic) int gaussianBlurLevelAndroid; 
@property (assign,nonatomic) BOOL enableSaveStoryToGallery; 
@property (nonatomic,copy) NSString * birthday; 
@property (assign,nonatomic) int snapP; 
@property (assign,nonatomic) int notificationPrivacy; 
@property (nonatomic,copy) NSString * storyPrivacy; 
@property (nonatomic,copy) NSString * quickAddPrivacy; 
@property (assign,nonatomic) int sent; 
@property (assign,nonatomic) int received; 
@property (assign,nonatomic) int score; 
@property (assign,nonatomic) int credits; 
@property (nonatomic,retain) NSMutableArray * snapsArray; 
@property (nonatomic,readonly) unsigned long long snapsArray_Count; 
@property (nonatomic,retain) NSMutableArray * recentsArray; 
@property (nonatomic,readonly) unsigned long long recentsArray_Count; 
@property (assign,nonatomic) long long lastUpdated; 
@property (assign,nonatomic) long long addedFriendsTimestamp; 
@property (assign,nonatomic) long long currentTimestamp; 
@property (assign,nonatomic) long long lastReplayedSnapTimestamp; 
@property (nonatomic,copy) NSString * snapchatPhoneNumber; 
@property (assign,nonatomic) BOOL searchableByPhoneNumber; 
@property (assign,nonatomic) BOOL shouldCallToVerifyNumber; 
@property (assign,nonatomic) BOOL shouldTextToVerifyNumber; 
@property (nonatomic,retain) NSMutableArray * seenTooltipsArray; 
@property (nonatomic,readonly) unsigned long long seenTooltipsArray_Count; 
@property (nonatomic,retain) NSMutableDictionary * clientProperties; 
@property (nonatomic,readonly) unsigned long long clientProperties_Count; 
@property (nonatomic,retain) NSMutableArray * clientPropertiesV2Array; 
@property (nonatomic,readonly) unsigned long long clientPropertiesV2Array_Count; 
@property (nonatomic,retain) SCPBFeatureSettings * featureSettings; 
@property (assign,nonatomic) BOOL hasFeatureSettings; 
@property (nonatomic,retain) SCPBAdAdPreferences * adPreferences; 
@property (assign,nonatomic) BOOL hasAdPreferences; 
@property (assign,nonatomic) int numberOfBestFriends; 
@property (nonatomic,retain) NSMutableDictionary * studySettings; 
@property (nonatomic,readonly) unsigned long long studySettings_Count; 
@property (assign,nonatomic) BOOL isCashActive; 
@property (nonatomic,copy) NSString * cashProvider; 
@property (nonatomic,copy) NSString * cashCustomerId; 
@property (nonatomic,copy) NSString * allowedToUseCash; 
@property (nonatomic,copy) NSString * thirdPartyTrackingBaseURL; 
@property (nonatomic,copy) NSString * thirdPartyTrackingAppId; 
@property (assign,nonatomic) long long lastAddressBookUpdatedDate; 
@property (nonatomic,copy) NSString * qrPath; 
@property (assign,nonatomic) BOOL enableLocationMediacards; 
@property (assign,nonatomic) BOOL requireRefreshingProfileMedia; 
@property (assign,nonatomic) BOOL shouldShowSuggestionPrompt; 
@property (nonatomic,copy) NSString * suggestionPromptLink; 
@property (nonatomic,copy) NSString * suggestionPromptText; 
@property (nonatomic,copy) NSString * suggestionPromptButtonText; 
@property (assign,nonatomic) long long suggestionPromptDurationInMillis; 
@property (assign,nonatomic) BOOL videoFiltersEnabled; 
@property (assign,nonatomic) BOOL imagePlayerEnabledAndroid; 
@property (assign,nonatomic) BOOL speedFiltersEnabledAndroid; 
@property (assign,nonatomic) BOOL reverseFilterEnabledAndroid; 
@property (assign,nonatomic) BOOL smoothingFilterEnabledAndroid; 
@property (assign,nonatomic) BOOL dirtyVideoRenderingEnabledAndroid; 
@property (assign,nonatomic) BOOL videoDecoderTexcoordTransformationEnabledAndroid; 
@property (assign,nonatomic) BOOL pinnableStickersEnabledAndroid; 
@property (assign,nonatomic) BOOL camera2LimitedLevelHighResolutionPhotoEnabledAndroid; 
@property (assign,nonatomic) BOOL scMediaRecorderEnabledAndroid; 
@property (assign,nonatomic) BOOL scMediaRecorderRecommendedAndroid; 
@property (assign,nonatomic) BOOL androidMediaRecorderSurfaceRecordingEnabled; 
@property (assign,nonatomic) BOOL camera1TakePhotoApiBlacklistedAndroid; 
@property (assign,nonatomic) BOOL camera1TakePhotoApiWhitelistedAndroid; 
@property (assign,nonatomic) BOOL camera2EnabledAndroid; 
@property (assign,nonatomic) BOOL gles3AllowedAndroid; 
@property (assign,nonatomic) BOOL blurAfterDownscaleEnabledAndroid; 
@property (assign,nonatomic) BOOL amrCodecEnabledAndroid; 
@property (assign,nonatomic) BOOL samsungAacEncEnabledAndroid; 
@property (assign,nonatomic) BOOL audioNoteEnabledAndroid; 
@property (assign,nonatomic) BOOL videoNoteEnabledAndroid; 
@property (assign,nonatomic) BOOL videoNoteApiFallbackAndroid; 
@property (assign,nonatomic) BOOL chatVideoEnabledAndroid; 
@property (assign,nonatomic) BOOL videoThumbnailEnabledAndroid; 
@property (nonatomic,retain) NSMutableArray * ourStoryAuthsArray; 
@property (nonatomic,readonly) unsigned long long ourStoryAuthsArray_Count; 
@property (nonatomic,retain) NSMutableDictionary * targeting; 
@property (nonatomic,readonly) unsigned long long targeting_Count; 
@property (nonatomic,retain) SCPBAdSourcesConfig * adSources; 
@property (assign,nonatomic) BOOL hasAdSources; 
@property (nonatomic,retain) SCPBAdTrackInfo * adTrackInfo; 
@property (assign,nonatomic) BOOL hasAdTrackInfo; 
@property (nonatomic,retain) SCPBAdAdProductsConfig * adProducts; 
@property (assign,nonatomic) BOOL hasAdProducts; 
@property (nonatomic,retain) NSMutableArray * industriesArray; 
@property (nonatomic,readonly) unsigned long long industriesArray_Count; 
@property (assign,nonatomic) BOOL rawThumbnailUploadEnabled; 
@property (assign,nonatomic) BOOL isSmsTwoFaEnabled; 
@property (assign,nonatomic) BOOL isOtpTwoFaEnabled; 
@property (assign,nonatomic) BOOL isTwoFaEnabled; 
@property (assign,nonatomic) int twoFaVerifiedDeviceNum; 
@property (nonatomic,retain) NSMutableArray * twoFaVerifiedDevicesArray; 
@property (nonatomic,readonly) unsigned long long twoFaVerifiedDevicesArray_Count; 
@property (nonatomic,retain) NSMutableDictionary * friendmojiMutableDict; 
@property (nonatomic,readonly) unsigned long long friendmojiMutableDict_Count; 
@property (nonatomic,retain) NSMutableDictionary * friendmojiReadOnlyDict; 
@property (nonatomic,readonly) unsigned long long friendmojiReadOnlyDict_Count; 
@property (nonatomic,retain) NSMutableArray * favoriteStickersArray; 
@property (nonatomic,readonly) unsigned long long favoriteStickersArray_Count; 
@property (nonatomic,retain) NSMutableArray * verifiedSharedPublicationsArray; 
@property (nonatomic,readonly) unsigned long long verifiedSharedPublicationsArray_Count; 
@property (nonatomic,retain) NSMutableArray * enabledIapCurrenciesArray; 
@property (nonatomic,readonly) unsigned long long enabledIapCurrenciesArray_Count; 
@property (nonatomic,retain) NSMutableArray * enabledLensStoreCurrenciesArray; 
@property (nonatomic,readonly) unsigned long long enabledLensStoreCurrenciesArray_Count; 
@property (nonatomic,retain) SCPBPromptMessage * clientPrompt; 
@property (assign,nonatomic) BOOL hasClientPrompt; 
@property (nonatomic,copy) NSString * notificationSoundSetting; 
@property (nonatomic,copy) NSString * ringingSound; 
@property (assign,nonatomic) int contactsResyncRequest; 
@property (assign,nonatomic) int gcsSampling; 
@property (assign,nonatomic) int snapMediaUploadConnectionTimeout; 
@property (assign,nonatomic) int snapMediaUploadSoTimeout; 
@property (nonatomic,copy) NSString * lagunaId; 
@property (nonatomic,retain) SCPBIdentityLagunaGetLagunaDevicesResponse * lagunaResponse; 
@property (assign,nonatomic) BOOL hasLagunaResponse; 
@property (assign,nonatomic) BOOL hasUsedLaguna; 
@property (assign,nonatomic) BOOL eSnapMedia; 
@property (nonatomic,retain) SCPBVideoRecordingTranscodingConfig * videoRecordingTranscodingConfiguration; 
@property (assign,nonatomic) BOOL hasVideoRecordingTranscodingConfiguration; 
@property (assign,nonatomic) int storyCount; 
@property (assign,nonatomic) BOOL frontCameraZoomEnabledAndroid; 
@property (nonatomic,copy) NSString * displayName; 
@property (assign,nonatomic) BOOL camera2TakePhotoApiAndroid; 
@property (assign,nonatomic) BOOL enableWorldLensGrid; 
@property (assign,nonatomic) float nftLoTimeout; 
@property (assign,nonatomic) float nftHiTimeout; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * voipDeviceToken; 
@property (nonatomic,copy) NSString * sicInit; 
@property (assign,nonatomic) BOOL enabledPushNotifications; 
@property (assign,nonatomic) BOOL stickerVisualRecommendationEnabledAndroid; 
@property (nonatomic,copy) NSString * prestartToken; 
@property (nonatomic,copy) NSString * prestartPrefix; 
@property (nonatomic,copy) NSString * prestartPort; 
@property (nonatomic,copy) NSString * prestartHostname; 
@property (nonatomic,retain) NSMutableArray * featureSettingsResponseArray; 
@property (nonatomic,readonly) unsigned long long featureSettingsResponseArray_Count; 
@property (nonatomic,copy) NSString * mobStoriesEnabled; 
@property (nonatomic,retain) SCPBBlizzardClientConfig * blizzardConfig; 
@property (assign,nonatomic) BOOL hasBlizzardConfig; 
@property (nonatomic,retain) NSMutableArray * friendmojiBlockedKeysArray; 
@property (nonatomic,readonly) unsigned long long friendmojiBlockedKeysArray_Count; 
@property (nonatomic,retain) NSMutableArray * clientPromptsArray; 
@property (nonatomic,readonly) unsigned long long clientPromptsArray_Count; 
@property (assign,nonatomic) int timeSinceLastTravelModelChange; 
@property (nonatomic,retain) SCPBResetDisabledTranscodingState * resetDisabledImagePlayerState; 
@property (assign,nonatomic) BOOL hasResetDisabledImagePlayerState; 
@property (assign,nonatomic) BOOL discoverContentDisabled; 
@property (nonatomic,copy) NSString * bitmojiSelfieId; 
@property (nonatomic,copy) NSString * bitmojiSnapcodeSelfieId; 
@property (assign,nonatomic) BOOL d2SMediaDownloadEnabled; 
@property (nonatomic,copy) NSString * fideliusLatestBeta; 
@property (nonatomic,copy) NSString * studioSerialNumber; 
@property (assign,nonatomic) BOOL enableSeparateLensListForBackCamera; 
@property (nonatomic,copy) NSString * iso3166Alpha2CountryCode; 
@property (assign,nonatomic) long long created; 
@property (nonatomic,retain) SCPBUnlockablesUnlockablesDirectAuthInfo * unlockablesDirectAuthInfo; 
@property (assign,nonatomic) BOOL hasUnlockablesDirectAuthInfo; 
@property (assign,nonatomic) BOOL isPopular; 
@property (nonatomic,copy) NSString * businessAccountId; 
@property (nonatomic,retain) NSMutableDictionary * studySettingsV2; 
@property (nonatomic,readonly) unsigned long long studySettingsV2_Count; 
@property (assign,nonatomic) BOOL enableArCoreAndroid; 
+(id)descriptor;
@end

