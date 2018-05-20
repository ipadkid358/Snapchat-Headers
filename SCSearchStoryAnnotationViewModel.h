/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSearchNetworkImage, NSString;

@interface SCSearchStoryAnnotationViewModel : NSObject <NSCopying> {

	SCSearchNetworkImage* _networkImage;
	long long _annotationStyle;
	NSString* _titleText;

}

@property (nonatomic,copy,readonly) SCSearchNetworkImage * networkImage;              //@synthesize networkImage=_networkImage - In the implementation block
@property (nonatomic,readonly) long long annotationStyle;                             //@synthesize annotationStyle=_annotationStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                             //@synthesize titleText=_titleText - In the implementation block
-(SCSearchNetworkImage *)networkImage;
-(id)initWithNetworkImage:(id)arg1 annotationStyle:(long long)arg2 titleText:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)titleText;
-(long long)annotationStyle;
@end
