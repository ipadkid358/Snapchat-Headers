/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCCDCustomStickerOwner, SCObjectPlaceholder, NSString;

@interface SCCustomStickerOwnerChangeRequest : NSObject {

	SCCDCustomStickerOwner* _customStickerOwner;
	SCObjectPlaceholder* _objectPlaceholder;

}

@property (nonatomic,readonly) SCObjectPlaceholder * placeholderForCreatedCustomStickerOwner; 
@property (nonatomic,copy,readonly) NSString * objectID; 
@property (nonatomic,copy) NSString * userId; 
+(id)changeRequestForCustomStickerOwner:(id)arg1 ;
+(id)creationRequestWithCustomStickerOwner:(id)arg1 ;
+(void)deleteCustomStickerOwners:(id)arg1 ;
+(void)deleteAllCustomStickerOwners;
-(id)initWithCustomStickerOwner:(id)arg1 ;
-(void)addDeletion:(id)arg1 ;
-(void)removeDeletion:(id)arg1 ;
-(void)addStickers:(id)arg1 ;
-(void)removeStickers:(id)arg1 ;
-(SCObjectPlaceholder *)placeholderForCreatedCustomStickerOwner;
-(void)setWithCustomStickerOwner:(id)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)objectID;
@end

