/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/NamedEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface SCAUnlockableImpressionBase : NSObject <NamedEvent, NSCopying> {

	NSNumber* carouselSize;
	NSNumber* camera;
	NSNumber* isAudioOn;
	NSNumber* snapPreviewMillis;
	NSNumber* snapDurationMillis;
	NSNumber* totalSwipedViewMillis;
	NSNumber* swipedOverCount;
	NSNumber* withMemoriesSave;
	NSNumber* memoriesSaveCount;
	NSNumber* withStoryPost;
	NSNumber* storyPostCount;
	NSNumber* withSnapSend;
	NSNumber* snapSendCount;
	NSNumber* snapSendRecipientCount;
	NSNumber* hasAttachment;
	NSNumber* withAttachmentOpen;
	NSNumber* attachmentViewMillis;
	NSNumber* attachmentMediaDurationMillis;
	NSNumber* attachmentLoadedOnEntry;
	NSNumber* attachmentLoadedOnExit;
	NSNumber* attachmentRenderTimestampMillis;
	NSNumber* attachmentOpenTimestampMillis;
	NSNumber* useDeclaredAge;
	NSNumber* deviceScreenHeightPixels;
	NSNumber* deviceScreenWidthPixels;
	long long attachmentType;
	NSString* adAccountId;
	NSString* campaignId;
	NSString* adSquadId;
	NSString* adId;
	NSString* said;
	NSString* requestId;
	NSString* opportunityRequestId;
	NSString* gtqRequestId;
	NSString* ittRequestId;
	NSString* snapMediaType;
	NSString* sponsoredType;
	NSString* rawAdData;
	NSString* encryptedThirdPartyTrackData;
	NSString* userAgent;
	NSString* attachmentiOSAppId;
	NSString* attachmentAndroidAppUrl;
	NSString* age;
	NSString* ageGroup;
	NSString* gender;
	NSString* dma;
	NSString* country;
	NSString* region;
	NSString* deviceModel;
	NSString* deviceId;
	NSString* osType;
	NSString* osVersion;
	NSString* appVersion;
	NSDate* serverTs;

}
-(id)getUserAgent;
-(void)setCarouselSize:(long long)arg1 ;
-(void)setTotalSwipedViewMillis:(long long)arg1 ;
-(void)setSwipedOverCount:(long long)arg1 ;
-(void)setWithSnapSend:(BOOL)arg1 ;
-(void)setWithStoryPost:(BOOL)arg1 ;
-(void)setWithMemoriesSave:(BOOL)arg1 ;
-(void)setIsAudioOn:(BOOL)arg1 ;
-(void)setRawAdData:(id)arg1 ;
-(void)setWithAttachmentOpen:(BOOL)arg1 ;
-(void)setSnapSendRecipientCount:(long long)arg1 ;
-(void)setSnapSendCount:(long long)arg1 ;
-(void)setStoryPostCount:(long long)arg1 ;
-(void)setMemoriesSaveCount:(long long)arg1 ;
-(void)setSnapDurationMillis:(long long)arg1 ;
-(void)setSnapPreviewMillis:(long long)arg1 ;
-(void)setOpportunityRequestId:(id)arg1 ;
-(void)setAdAccountId:(id)arg1 ;
-(void)setAdId:(id)arg1 ;
-(id)getCountry;
-(id)getRegion;
-(id)getDeviceModel;
-(id)getOsType;
-(id)getOsVersion;
-(id)getAppVersion;
-(id)getServerTs;
-(void)setServerTs:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getRequestId;
-(id)getAdId;
-(id)getAdAccountId;
-(id)getCampaignId;
-(id)getEncryptedThirdPartyTrackData;
-(void)setEncryptedThirdPartyTrackData:(id)arg1 ;
-(id)getAge;
-(id)getAgeGroup;
-(void)setAgeGroup:(id)arg1 ;
-(id)getGender;
-(id)getSaid;
-(void)setSaid:(id)arg1 ;
-(id)getAdSquadId;
-(void)setAdSquadId:(id)arg1 ;
-(long long)getCamera;
-(long long)getAttachmentType;
-(BOOL)getWithSnapSend;
-(BOOL)getWithStoryPost;
-(long long)getStoryPostCount;
-(BOOL)getWithAttachmentOpen;
-(id)getRawAdData;
-(id)getDeviceId;
-(BOOL)getHasAttachment;
-(void)setHasAttachment:(BOOL)arg1 ;
-(long long)getCarouselSize;
-(BOOL)getIsAudioOn;
-(long long)getSnapPreviewMillis;
-(long long)getSnapDurationMillis;
-(long long)getTotalSwipedViewMillis;
-(long long)getSwipedOverCount;
-(BOOL)getWithMemoriesSave;
-(long long)getMemoriesSaveCount;
-(long long)getSnapSendCount;
-(long long)getSnapSendRecipientCount;
-(long long)getAttachmentViewMillis;
-(void)setAttachmentViewMillis:(long long)arg1 ;
-(long long)getAttachmentMediaDurationMillis;
-(void)setAttachmentMediaDurationMillis:(long long)arg1 ;
-(BOOL)getAttachmentLoadedOnEntry;
-(void)setAttachmentLoadedOnEntry:(BOOL)arg1 ;
-(BOOL)getAttachmentLoadedOnExit;
-(void)setAttachmentLoadedOnExit:(BOOL)arg1 ;
-(long long)getAttachmentRenderTimestampMillis;
-(void)setAttachmentRenderTimestampMillis:(long long)arg1 ;
-(long long)getAttachmentOpenTimestampMillis;
-(void)setAttachmentOpenTimestampMillis:(long long)arg1 ;
-(BOOL)getUseDeclaredAge;
-(void)setUseDeclaredAge:(BOOL)arg1 ;
-(long long)getDeviceScreenHeightPixels;
-(void)setDeviceScreenHeightPixels:(long long)arg1 ;
-(long long)getDeviceScreenWidthPixels;
-(void)setDeviceScreenWidthPixels:(long long)arg1 ;
-(id)getOpportunityRequestId;
-(id)getGtqRequestId;
-(void)setGtqRequestId:(id)arg1 ;
-(id)getIttRequestId;
-(void)setIttRequestId:(id)arg1 ;
-(id)getSnapMediaType;
-(void)setSnapMediaType:(id)arg1 ;
-(id)getSponsoredType;
-(void)setSponsoredType:(id)arg1 ;
-(id)getAttachmentiOSAppId;
-(void)setAttachmentiOSAppId:(id)arg1 ;
-(id)getAttachmentAndroidAppUrl;
-(void)setAttachmentAndroidAppUrl:(id)arg1 ;
-(id)getDma;
-(void)setDma:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRegion:(id)arg1 ;
-(void)setUserAgent:(id)arg1 ;
-(void)setCamera:(long long)arg1 ;
-(void)setCountry:(id)arg1 ;
-(void)setOsVersion:(id)arg1 ;
-(void)setGender:(id)arg1 ;
-(void)setRequestId:(id)arg1 ;
-(void)setDeviceId:(id)arg1 ;
-(void)setOsType:(id)arg1 ;
-(void)setAttachmentType:(long long)arg1 ;
-(id)asDictionary;
-(void)setAge:(id)arg1 ;
-(void)setCampaignId:(id)arg1 ;
-(void)setDeviceModel:(id)arg1 ;
-(void)setAppVersion:(id)arg1 ;
@end
