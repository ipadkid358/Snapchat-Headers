/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTimeProfilable.h>

@class NSString;

@interface SCProfileImageUtils : NSObject <SCTimeProfilable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
+(id)shared;
-(id)stringForProfileImageSize:(long long)arg1 ;
-(id)deserializeProfileImagesForFriends:(id)arg1 ;
-(id)profileImageArrayWithImageDataArray:(id)arg1 ;
-(id)maskedProfileImageArrayWithImageDataArray:(id)arg1 ;
-(id)serializeProfileImages:(id)arg1 ;
-(id)deserializeProfileImages:(id)arg1 ;
-(id)deserializeProfileImages:(id)arg1 bufferStartIndex:(int*)arg2 ;
-(id)deserializeUsername:(id)arg1 ;
-(id)init;
@end
