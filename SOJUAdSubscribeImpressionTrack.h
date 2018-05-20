/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUAdSubscribeImpressionTrack.h>
@class NSNumber, NSString, SOJUAdTopsnapVolumes;


@protocol SOJUAdSubscribeImpressionTrack <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * topsnapTimeViewedSeconds; 
@property (nonatomic,copy,readonly) NSNumber * topsnapMediaDurationSeconds; 
@property (nonatomic,copy,readonly) NSNumber * longformTimeViewedSeconds; 
@property (nonatomic,copy,readonly) NSNumber * swiped; 
@property (nonatomic,copy,readonly) NSNumber * renderedTimestampInMilliSeconds; 
@property (nonatomic,copy,readonly) NSNumber * deltaBetweenReceiveAndRenderMillis; 
@property (nonatomic,copy,readonly) NSNumber * channelSubscribedEndStatus; 
@property (nonatomic,copy,readonly) NSNumber * swipeCount; 
@property (nonatomic,copy,readonly) NSString * creativeId; 
@property (nonatomic,copy,readonly) NSNumber * topsnapAudioPlaybackVolume; 
@property (nonatomic,copy,readonly) NSNumber * longformAudioPlaybackVolume; 
@property (nonatomic,copy,readonly) NSNumber * topsnapTimeViewedBeforeInteractionSeconds; 
@property (nonatomic,copy,readonly) SOJUAdTopsnapVolumes * topsnapVolumes; 
@property (nonatomic,copy,readonly) NSNumber * topsnapMaxContinuousTimeViewedSeconds; 
@property (nonatomic,copy,readonly) NSNumber * topsnapAudibleTimeViewedSeconds; 
@property (nonatomic,copy,readonly) NSString * topsnapMediaType; 
@required
-(NSNumber *)topsnapTimeViewedSeconds;
-(NSNumber *)topsnapMediaDurationSeconds;
-(NSNumber *)longformTimeViewedSeconds;
-(NSNumber *)swiped;
-(NSNumber *)deltaBetweenReceiveAndRenderMillis;
-(NSNumber *)swipeCount;
-(NSNumber *)topsnapAudioPlaybackVolume;
-(NSNumber *)topsnapTimeViewedBeforeInteractionSeconds;
-(SOJUAdTopsnapVolumes *)topsnapVolumes;
-(NSNumber *)topsnapMaxContinuousTimeViewedSeconds;
-(NSNumber *)topsnapAudibleTimeViewedSeconds;
-(NSString *)topsnapMediaType;
-(NSNumber *)renderedTimestampInMilliSeconds;
-(NSNumber *)longformAudioPlaybackVolume;
-(NSNumber *)channelSubscribedEndStatus;
-(NSString *)creativeId;

@end


@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdSubscribeImpressionTrack : NSObject <SOJUAdSubscribeImpressionTrack> {

	NSNumber* _topsnapTimeViewedSeconds;
	NSNumber* _topsnapMediaDurationSeconds;
	NSNumber* _longformTimeViewedSeconds;
	NSNumber* _swiped;
	NSNumber* _renderedTimestampInMilliSeconds;
	NSNumber* _deltaBetweenReceiveAndRenderMillis;
	NSNumber* _channelSubscribedEndStatus;
	NSNumber* _swipeCount;
	NSString* _creativeId;
	NSNumber* _topsnapAudioPlaybackVolume;
	NSNumber* _longformAudioPlaybackVolume;
	NSNumber* _topsnapTimeViewedBeforeInteractionSeconds;
	SOJUAdTopsnapVolumes* _topsnapVolumes;
	NSNumber* _topsnapMaxContinuousTimeViewedSeconds;
	NSNumber* _topsnapAudibleTimeViewedSeconds;
	NSString* _topsnapMediaType;

}

@property (nonatomic,copy,readonly) NSNumber * topsnapTimeViewedSeconds;                               //@synthesize topsnapTimeViewedSeconds=_topsnapTimeViewedSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * topsnapMediaDurationSeconds;                            //@synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * longformTimeViewedSeconds;                              //@synthesize longformTimeViewedSeconds=_longformTimeViewedSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * swiped;                                                 //@synthesize swiped=_swiped - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * renderedTimestampInMilliSeconds;                        //@synthesize renderedTimestampInMilliSeconds=_renderedTimestampInMilliSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * deltaBetweenReceiveAndRenderMillis;                     //@synthesize deltaBetweenReceiveAndRenderMillis=_deltaBetweenReceiveAndRenderMillis - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * channelSubscribedEndStatus;                             //@synthesize channelSubscribedEndStatus=_channelSubscribedEndStatus - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * swipeCount;                                             //@synthesize swipeCount=_swipeCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * creativeId;                                             //@synthesize creativeId=_creativeId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * topsnapAudioPlaybackVolume;                             //@synthesize topsnapAudioPlaybackVolume=_topsnapAudioPlaybackVolume - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * longformAudioPlaybackVolume;                            //@synthesize longformAudioPlaybackVolume=_longformAudioPlaybackVolume - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * topsnapTimeViewedBeforeInteractionSeconds;              //@synthesize topsnapTimeViewedBeforeInteractionSeconds=_topsnapTimeViewedBeforeInteractionSeconds - In the implementation block
@property (nonatomic,copy,readonly) SOJUAdTopsnapVolumes * topsnapVolumes;                             //@synthesize topsnapVolumes=_topsnapVolumes - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * topsnapMaxContinuousTimeViewedSeconds;                  //@synthesize topsnapMaxContinuousTimeViewedSeconds=_topsnapMaxContinuousTimeViewedSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * topsnapAudibleTimeViewedSeconds;                        //@synthesize topsnapAudibleTimeViewedSeconds=_topsnapAudibleTimeViewedSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * topsnapMediaType;                                       //@synthesize topsnapMediaType=_topsnapMediaType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(float)topsnapTimeViewedSecondsValue;
-(float)topsnapMediaDurationSecondsValue;
-(BOOL)swipedValue;
-(long long)renderedTimestampInMilliSecondsValue;
-(long long)deltaBetweenReceiveAndRenderMillisValue;
-(int)swipeCountValue;
-(float)topsnapAudioPlaybackVolumeValue;
-(float)longformAudioPlaybackVolumeValue;
-(float)topsnapTimeViewedBeforeInteractionSecondsValue;
-(float)topsnapMaxContinuousTimeViewedSecondsValue;
-(float)topsnapAudibleTimeViewedSecondsValue;
-(long long)topsnapMediaTypeEnum;
-(float)longformTimeViewedSecondsValue;
-(NSNumber *)topsnapTimeViewedSeconds;
-(NSNumber *)topsnapMediaDurationSeconds;
-(NSNumber *)longformTimeViewedSeconds;
-(NSNumber *)swiped;
-(NSNumber *)deltaBetweenReceiveAndRenderMillis;
-(NSNumber *)swipeCount;
-(NSNumber *)topsnapAudioPlaybackVolume;
-(NSNumber *)topsnapTimeViewedBeforeInteractionSeconds;
-(SOJUAdTopsnapVolumes *)topsnapVolumes;
-(NSNumber *)topsnapMaxContinuousTimeViewedSeconds;
-(NSNumber *)topsnapAudibleTimeViewedSeconds;
-(NSString *)topsnapMediaType;
-(NSNumber *)renderedTimestampInMilliSeconds;
-(NSNumber *)longformAudioPlaybackVolume;
-(BOOL)channelSubscribedEndStatusValue;
-(NSNumber *)channelSubscribedEndStatus;
-(id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2 longformTimeViewedSeconds:(id)arg3 swiped:(id)arg4 renderedTimestampInMilliSeconds:(id)arg5 deltaBetweenReceiveAndRenderMillis:(id)arg6 channelSubscribedEndStatus:(id)arg7 swipeCount:(id)arg8 creativeId:(id)arg9 topsnapAudioPlaybackVolume:(id)arg10 longformAudioPlaybackVolume:(id)arg11 topsnapTimeViewedBeforeInteractionSeconds:(id)arg12 topsnapVolumes:(id)arg13 topsnapMaxContinuousTimeViewedSeconds:(id)arg14 topsnapAudibleTimeViewedSeconds:(id)arg15 topsnapMediaType:(id)arg16 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSString *)creativeId;
@end

