/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSNumber, NSData, SOJUAudioStitch;

@interface SCStorySnapMediaContentBuilder : NSObject {

	NSString* _storySnapId;
	NSDate* _storyTimestamp;
	NSDate* _storyExpirationDate;
	long long _mediaType;
	NSString* _mediaId;
	NSString* _mediaKey;
	NSString* _mediaIv;
	NSString* _storyCacheMediaId;
	NSString* _captionText;
	NSString* _attachmentUrl;
	NSString* _venueId;
	NSNumber* _captionScreenPosition;
	NSNumber* _captionOrientation;
	BOOL _overlayPresent;
	BOOL _operaShouldUseFraming;
	NSString* _operaDisplayName;
	NSString* _operaDisplaySubTitle;
	NSData* _contextHint;
	SOJUAudioStitch* _audioStitch;
	long long _loadState;

}
+(id)withStorySnapMediaContent:(id)arg1 ;
-(id)setMediaKey:(id)arg1 ;
-(id)setMediaIv:(id)arg1 ;
-(id)setVenueId:(id)arg1 ;
-(id)setContextHint:(id)arg1 ;
-(id)setAttachmentUrl:(id)arg1 ;
-(id)setLoadState:(long long)arg1 ;
-(id)setStorySnapId:(id)arg1 ;
-(id)setStoryTimestamp:(id)arg1 ;
-(id)setStoryExpirationDate:(id)arg1 ;
-(id)setStoryCacheMediaId:(id)arg1 ;
-(id)setCaptionScreenPosition:(id)arg1 ;
-(id)setCaptionOrientation:(id)arg1 ;
-(id)setOverlayPresent:(BOOL)arg1 ;
-(id)setOperaShouldUseFraming:(BOOL)arg1 ;
-(id)setOperaDisplayName:(id)arg1 ;
-(id)setOperaDisplaySubTitle:(id)arg1 ;
-(id)setAudioStitch:(id)arg1 ;
-(id)build;
-(id)setMediaType:(long long)arg1 ;
-(id)setCaptionText:(id)arg1 ;
-(id)setMediaId:(id)arg1 ;
@end

