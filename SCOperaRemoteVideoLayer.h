/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayer.h>

@class NSURL, SCOperaPage, NSString, UIColor, NSDictionary;

@interface SCOperaRemoteVideoLayer : NSObject <SCOperaLayer> {

	NSURL* _cacheDirectory;
	BOOL _isInline;
	BOOL _videoRotationEnabled;
	SCOperaPage* _page;
	NSString* _firstFrameImageKey;
	NSString* _videoId;
	UIColor* _primaryColor;
	NSDictionary* _remoteURLToRelativePath;

}

@property (assign,nonatomic,__weak) SCOperaPage * page;                             //@synthesize page=_page - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstFrameImageKey;                  //@synthesize firstFrameImageKey=_firstFrameImageKey - In the implementation block
@property (nonatomic,readonly) BOOL isInline;                                       //@synthesize isInline=_isInline - In the implementation block
@property (nonatomic,readonly) BOOL videoRotationEnabled;                           //@synthesize videoRotationEnabled=_videoRotationEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoId;                             //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,readonly) UIColor * primaryColor;                              //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,readonly) NSDictionary * remoteURLToRelativePath;              //@synthesize remoteURLToRelativePath=_remoteURLToRelativePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithProperties:(id)arg1 page:(id)arg2 ;
-(NSString *)videoId;
-(BOOL)videoRotationEnabled;
-(NSString *)firstFrameImageKey;
-(id)initWithProperties:(id)arg1 page:(id)arg2 ;
-(id)localURLForRemoteURL:(id)arg1 ;
-(NSDictionary *)remoteURLToRelativePath;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(UIColor *)primaryColor;
-(SCOperaPage *)page;
-(void)setPage:(SCOperaPage *)arg1 ;
-(BOOL)isInline;
@end
