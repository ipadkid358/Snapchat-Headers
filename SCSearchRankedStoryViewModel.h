/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCSearchSnapMedia, SCSearchActionModel;

@interface SCSearchRankedStoryViewModel : NSObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _geoText;
	NSString* _debugInfo;
	SCSearchSnapMedia* _thumbnail;
	SCSearchActionModel* _tapActionModel;

}

@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * geoText;                                //@synthesize geoText=_geoText - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugInfo;                              //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,copy,readonly) SCSearchSnapMedia * thumbnail;                     //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * tapActionModel;              //@synthesize tapActionModel=_tapActionModel - In the implementation block
-(SCSearchActionModel *)tapActionModel;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 geoText:(id)arg3 debugInfo:(id)arg4 thumbnail:(id)arg5 tapActionModel:(id)arg6 ;
-(NSString *)geoText;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(SCSearchSnapMedia *)thumbnail;
-(NSString *)debugInfo;
@end

