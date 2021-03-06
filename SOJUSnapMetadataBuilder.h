/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, SOJUSnapAttachment, NSArray, SOJUMultiSnapMetadata;

@interface SOJUSnapMetadataBuilder : NSObject {

	NSNumber* _isReply;
	NSNumber* _cameraFrontFacing;
	NSString* _orientation;
	NSString* _countryCode;
	NSString* _filterId;
	NSString* _lensId;
	NSString* _encGeoData;
	NSString* _captionTextDeprecated;
	SOJUSnapAttachment* _snapAttachmentDeprecated;
	NSString* _venueId;
	NSArray* _snapAttachments;
	NSNumber* _isInfiniteDuration;
	SOJUMultiSnapMetadata* _multiSnapMetadata;
	NSString* _checksum;
	NSString* _contextHint;
	NSString* _animatedSnapType;
	NSString* _lensMetadata;
	NSString* _sendSource;
	NSNumber* _captureDate;
	NSString* _unlockablesSnapInfo;

}
+(id)withJUSnapMetadata:(id)arg1 ;
-(id)setLensId:(id)arg1 ;
-(id)setEncGeoData:(id)arg1 ;
-(id)setOrientationEnum:(long long)arg1 ;
-(id)setCameraFrontFacingValue:(BOOL)arg1 ;
-(id)setCameraFrontFacing:(id)arg1 ;
-(id)setSnapAttachments:(id)arg1 ;
-(id)setFilterId:(id)arg1 ;
-(id)setIsInfiniteDurationValue:(BOOL)arg1 ;
-(id)setAnimatedSnapTypeEnum:(long long)arg1 ;
-(id)setIsReplyValue:(BOOL)arg1 ;
-(id)setSendSourceEnum:(long long)arg1 ;
-(id)setCaptureDateValue:(long long)arg1 ;
-(id)setCaptionTextDeprecated:(id)arg1 ;
-(id)setSnapAttachmentDeprecated:(id)arg1 ;
-(id)setVenueId:(id)arg1 ;
-(id)setIsInfiniteDuration:(id)arg1 ;
-(id)setMultiSnapMetadata:(id)arg1 ;
-(id)setContextHint:(id)arg1 ;
-(id)setAnimatedSnapType:(id)arg1 ;
-(id)setLensMetadata:(id)arg1 ;
-(id)setSendSource:(id)arg1 ;
-(id)setUnlockablesSnapInfo:(id)arg1 ;
-(id)setOrientation:(id)arg1 ;
-(id)setChecksum:(id)arg1 ;
-(id)setCountryCode:(id)arg1 ;
-(id)build;
-(id)setIsReply:(id)arg1 ;
-(id)setCaptureDate:(id)arg1 ;
@end

