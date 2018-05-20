/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUAdStorySnapImpressionTrack.h>
@class NSNumber, NSString, SOJUAdThreeVImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdSubscribeImpressionTrack;


@protocol SOJUAdStorySnapImpressionTrack <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * snapIndex; 
@property (nonatomic,copy,readonly) NSNumber * swipeUpCount; 
@property (nonatomic,copy,readonly) NSString * skipEvent; 
@property (nonatomic,copy,readonly) NSString * adType; 
@property (nonatomic,copy,readonly) SOJUAdThreeVImpressionTrack * threeV; 
@property (nonatomic,copy,readonly) SOJUAdAppInstallImpressionTrack * appInstall; 
@property (nonatomic,copy,readonly) SOJUAdLongformVideoImpressionTrack * longformVideo; 
@property (nonatomic,copy,readonly) SOJUAdRemoteWebpageImpressionTrack * remoteWebpage; 
@property (nonatomic,copy,readonly) SOJUAdLocalWebpageImpressionTrack * localWebpage; 
@property (nonatomic,copy,readonly) SOJUAdDeepLinkImpressionTrack * deepLink; 
@property (nonatomic,copy,readonly) SOJUAdSubscribeImpressionTrack * subscribe; 
@required
-(SOJUAdThreeVImpressionTrack *)threeV;
-(SOJUAdAppInstallImpressionTrack *)appInstall;
-(SOJUAdLongformVideoImpressionTrack *)longformVideo;
-(SOJUAdRemoteWebpageImpressionTrack *)remoteWebpage;
-(SOJUAdLocalWebpageImpressionTrack *)localWebpage;
-(NSNumber *)snapIndex;
-(NSNumber *)swipeUpCount;
-(NSString *)skipEvent;
-(NSString *)adType;
-(SOJUAdDeepLinkImpressionTrack *)deepLink;
-(SOJUAdSubscribeImpressionTrack *)subscribe;

@end


@class NSNumber, NSString, SOJUAdThreeVImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdSubscribeImpressionTrack;

@interface SOJUAdStorySnapImpressionTrack : NSObject <SOJUAdStorySnapImpressionTrack> {

	NSNumber* _snapIndex;
	NSNumber* _swipeUpCount;
	NSString* _skipEvent;
	NSString* _adType;
	SOJUAdThreeVImpressionTrack* _threeV;
	SOJUAdAppInstallImpressionTrack* _appInstall;
	SOJUAdLongformVideoImpressionTrack* _longformVideo;
	SOJUAdRemoteWebpageImpressionTrack* _remoteWebpage;
	SOJUAdLocalWebpageImpressionTrack* _localWebpage;
	SOJUAdDeepLinkImpressionTrack* _deepLink;
	SOJUAdSubscribeImpressionTrack* _subscribe;

}

@property (nonatomic,copy,readonly) NSNumber * snapIndex;                                            //@synthesize snapIndex=_snapIndex - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * swipeUpCount;                                         //@synthesize swipeUpCount=_swipeUpCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * skipEvent;                                            //@synthesize skipEvent=_skipEvent - In the implementation block
@property (nonatomic,copy,readonly) NSString * adType;                                               //@synthesize adType=_adType - In the implementation block
@property (nonatomic,copy,readonly) SOJUAdThreeVImpressionTrack * threeV;                            //@synthesize threeV=_threeV - In the implementation block
@property (nonatomic,copy,readonly) SOJUAdAppInstallImpressionTrack * appInstall;                    //@synthesize appInstall=_appInstall - In the implementation block
@property (nonatomic,copy,readonly) SOJUAdLongformVideoImpressionTrack * longformVideo;              //@synthesize longformVideo=_longformVideo - In the implementation block
@property (nonatomic,copy,readonly) SOJUAdRemoteWebpageImpressionTrack * remoteWebpage;              //@synthesize remoteWebpage=_remoteWebpage - In the implementation block
@property (nonatomic,copy,readonly) SOJUAdLocalWebpageImpressionTrack * localWebpage;                //@synthesize localWebpage=_localWebpage - In the implementation block
@property (nonatomic,copy,readonly) SOJUAdDeepLinkImpressionTrack * deepLink;                        //@synthesize deepLink=_deepLink - In the implementation block
@property (nonatomic,copy,readonly) SOJUAdSubscribeImpressionTrack * subscribe;                      //@synthesize subscribe=_subscribe - In the implementation block
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
-(long long)adTypeEnum;
-(SOJUAdThreeVImpressionTrack *)threeV;
-(SOJUAdAppInstallImpressionTrack *)appInstall;
-(SOJUAdLongformVideoImpressionTrack *)longformVideo;
-(SOJUAdRemoteWebpageImpressionTrack *)remoteWebpage;
-(SOJUAdLocalWebpageImpressionTrack *)localWebpage;
-(int)snapIndexValue;
-(int)swipeUpCountValue;
-(NSNumber *)snapIndex;
-(NSNumber *)swipeUpCount;
-(NSString *)skipEvent;
-(id)initWithSnapIndex:(id)arg1 swipeUpCount:(id)arg2 skipEvent:(id)arg3 adType:(id)arg4 threeV:(id)arg5 appInstall:(id)arg6 longformVideo:(id)arg7 remoteWebpage:(id)arg8 localWebpage:(id)arg9 deepLink:(id)arg10 subscribe:(id)arg11 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSString *)adType;
-(SOJUAdDeepLinkImpressionTrack *)deepLink;
-(SOJUAdSubscribeImpressionTrack *)subscribe;
@end

