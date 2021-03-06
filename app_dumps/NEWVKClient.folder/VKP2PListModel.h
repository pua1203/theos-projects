/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class NSNumberFormatter, NSNumber;

__attribute__((visibility("hidden")))
@interface VKP2PListModel : ListModel {
	BOOL _showSendP2PButton;
	NSNumber* _dialog_id;
	NSNumberFormatter* _amountFormatter;
}
@property(assign, nonatomic) BOOL showSendP2PButton;
@property(retain, nonatomic) NSNumberFormatter* amountFormatter;
@property(retain, nonatomic) NSNumber* dialog_id;
+(id)with:(id)with dialogId:(id)anId sendP2PButton:(BOOL)button;
-(void).cxx_destruct;
-(void)changeTransferStatus:(int)status withTransferId:(id)transferId andReload:(id)reload;
-(void)handleSend:(id)send :(id)arg2;
-(void)handleAccept:(id)accept :(id)arg2;
-(void)handleCancel:(id)cancel :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)itemsToAppend:(id)append to:(id)to context:(id)context;
-(id)sendButton;
-(id)componentForObject:(id)object withContext:(id)context;
-(id)process:(id)process;
-(id)request:(int)request count:(int)count;
-(id)countKey;
-(id)spawnContext:(id)context;
@end

