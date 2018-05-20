/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCStoriesSnapViewerInfo : NSObject <NSCopying> {

	BOOL _viewerScreenshotted;
	BOOL _viewerSaved;
	NSString* _viewerUserId;
	NSString* _viewerUsername;
	NSString* _viewerDisplayName;

}

@property (nonatomic,copy,readonly) NSString * viewerUserId;                   //@synthesize viewerUserId=_viewerUserId - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerUsername;                 //@synthesize viewerUsername=_viewerUsername - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerDisplayName;              //@synthesize viewerDisplayName=_viewerDisplayName - In the implementation block
@property (nonatomic,readonly) BOOL viewerScreenshotted;                       //@synthesize viewerScreenshotted=_viewerScreenshotted - In the implementation block
@property (nonatomic,readonly) BOOL viewerSaved;                               //@synthesize viewerSaved=_viewerSaved - In the implementation block
-(id)initWithViewerUserId:(id)arg1 viewerUsername:(id)arg2 viewerDisplayName:(id)arg3 viewerScreenshotted:(BOOL)arg4 viewerSaved:(BOOL)arg5 ;
-(NSString *)viewerUserId;
-(NSString *)viewerUsername;
-(NSString *)viewerDisplayName;
-(BOOL)viewerScreenshotted;
-(BOOL)viewerSaved;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
